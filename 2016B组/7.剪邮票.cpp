/*
�𰸣�116
�������ο�����˼·�������ұ߶��һ�У��������ɱ������ж�ʱ����4+1=5�����ǲ��������������
1   2   3   4  5
6   7   8   9  10
11  12  13  14  15
�ж����������Ҽ��ɡ�����ѡ���������ÿһ�����ж������ĸ������Ƿ�����������ڵ�����
�����ڣ���֤����������һ��ģ��������ڣ�������Ҫ��*/
#include<iostream>
using namespace std;
int mp[12]={1,2,3,4,6,7,8,9,11,12,13,14};//���е�12������ 
int a[5],vis[5];
int b[4]={-1,1,-5,5};//���� ����
void dfs(int n)
{
	for(int i=0;i<4;i++)
	{
		int tmp=a[n]+b[i];//�������ҵ����� 
		if(tmp<1||tmp>14||tmp==5||tmp==10)//���Ϸ� 
		continue;
		for(int j=1;j<=5;j++)
		{
			if(tmp==a[j]&&!vis[j])
			{
				vis[j]=1;
				dfs(j);
			}
		}
	}
}
int main()
{
	int cnt=0;
	for(int x1=0;x1<12;x1++)
	for(int x2=x1+1;x2<12;x2++)
	for(int x3=x2+1;x3<12;x3++)
	for(int x4=x3+1;x4<12;x4++)
	for(int x5=x4+1;x5<12;x5++)
	{
		a[1]=mp[x1];
		a[2]=mp[x2];
		a[3]=mp[x3];
		a[4]=mp[x4];
		a[5]=mp[x5];
	for(int i=1;i<=5;i++)
	vis[i]=0;
		vis[1]=1;
		dfs(1);//�ӵ�һ����ʼ 
		bool flag=true;
		for(int i=1;i<=5;i++)
		{
			if(vis[i]==0)
			{
				flag=false;
				break;
			}
		}
		if(!flag)
		{
			continue;
		}
		else
		{
			cnt++;
		}	
	}
	cout<<cnt;
	return 0;
}
