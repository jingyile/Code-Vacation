#include<iostream>
using namespace std;
int v[18];
int a[4][4];
__int64 ans;

//judge,���������У��Խ�������return 0������return 1 
int judge(){
	//���ж� 
	for(int i=0;i<4;i++){
		int sum3=0;
		for(int j=0;j<4;j++){
			sum3+=a[j][i];
		}
		if(sum3!=34)return 0;
	}
	//�Խ����ж� 
	int sum4=a[0][0]+a[1][1]+a[2][2]+a[3][3];
	if(sum4!=34)return 0;
	int sum5=a[0][3]+a[1][2]+a[2][1]+a[3][0];
	if(sum5!=34)return 0;
	return 1; 
}

void dfs(int i,int j,int current){
	if(i==3&&j==3){ 
		if(judge())
			ans++;
		return;
	}
	int i_temp,j_temp;//i_temp,j_tempΪ��Ҫǰ���ĸ��ӵ��±� 
	if(j==3){
		i_temp=i+1;j_temp=0;
	}else if(j<3){
		i_temp=i;j_temp=j+1;
	}
	for(int k=2;k<=16;k++){
		//��֦ 
		if(current>34)return; 
//		if(j_temp==3&&k!=34)continue;
		if(!v[k]){//��ǰ��δʹ�ù����� k������и��ƣ��ݹ� 
			v[k]=1;
			a[i_temp][j_temp]=k;
			if(j_temp<3)
				dfs(i_temp,j_temp,k+current);
			else
				dfs(i_temp,j_temp,0);
			//����ʱҪ�ر�ע�⻹ԭһЩ������������ʵҲ�ɲ�ִ��a[i_temp][j_temp]=0; 
			//��Ϊcurrent���Ǽ�¼��ǰ���ܵݹ�ĸ��ӵĵ�ǰ��ֵ��һ���ܵݹ飬��a[i_temp][j_temp]=k;����ԭֵ 
			a[i_temp][j_temp]=0; 
			v[k]=0;
		}
	}
}

int main(){
	v[1]=1;
	a[0][0]=1;
	dfs(0,0,1);
	cout<<ans<<endl;
	return 0;
}
