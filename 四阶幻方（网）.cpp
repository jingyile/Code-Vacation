#include<iostream>
using namespace std;
int v[18];
int a[4][4];
__int64 ans;

//judge,若不符合列，对角线条件return 0，否则return 1 
int judge(){
	//列判断 
	for(int i=0;i<4;i++){
		int sum3=0;
		for(int j=0;j<4;j++){
			sum3+=a[j][i];
		}
		if(sum3!=34)return 0;
	}
	//对角线判断 
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
	int i_temp,j_temp;//i_temp,j_temp为将要前进的格子的下标 
	if(j==3){
		i_temp=i+1;j_temp=0;
	}else if(j<3){
		i_temp=i;j_temp=j+1;
	}
	for(int k=2;k<=16;k++){
		//剪枝 
		if(current>34)return; 
//		if(j_temp==3&&k!=34)continue;
		if(!v[k]){//若前面未使用过数字 k，则进行复制，递归 
			v[k]=1;
			a[i_temp][j_temp]=k;
			if(j_temp<3)
				dfs(i_temp,j_temp,k+current);
			else
				dfs(i_temp,j_temp,0);
			//回溯时要特别注意还原一些变量。这里其实也可不执行a[i_temp][j_temp]=0; 
			//因为current总是记录当前行能递归的格子的当前总值，一旦能递归，由a[i_temp][j_temp]=k;覆盖原值 
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
