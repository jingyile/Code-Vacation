#include<iostream>
using namespace std;
int cnt;
int a[13];
int vis[13]; 
void dfs(int n)
{
	if(n>3&&a[1]+a[2]!=a[3])
	return;
	if(n>6&&a[4]-a[5]!=a[6])
	return;
	if(n>9&&a[7]*a[8]!=a[9])
	return;
	if(n>12&&a[12]*a[11]==a[10])
	{
		for(int i=1;i<=12;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		cnt++;
		return;
	}
	for(int i=1;i<=13;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			a[n]=i;
			if(n<13)
			dfs(n+1);
			vis[i]=0;
		}
	}
}
int main()
{
dfs(1);
cout<<cnt;
return 0;	
} 
