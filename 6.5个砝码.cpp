#include<iostream>
using namespace std;
int a[5]={81,27,9,3,1};
int b[3]={+1,0,-1};
int ans[5];
int main()
{
	int n;
	cin>>n;
	bool flag=false; 
	int x1,x2,x3,x4,x5;
	for(x1=0;x1<3;x1++)
	for(x2=0;x2<3;x2++)
	for(x3=0;x3<3;x3++)
	for(x4=0;x4<3;x4++)
	for(x5=0;x5<3;x5++)
	{
		if(a[0]*b[x1]+a[1]*b[x2]+a[2]*b[x3]+a[3]*b[x4]+a[4]*b[x5]==n)
		{
		ans[0]=a[0]*b[x1];
		ans[1]=a[1]*b[x2];
		ans[2]=a[2]*b[x3];
		ans[3]=a[3]*b[x4];
		ans[4]=a[4]*b[x5];
		for(int i=0;i<5;i++)
		if(ans[i]!=0)
		{
		if(ans[i]>0&&flag)
		{
		cout<<"+"<<ans[i];
		}
		else 
		{
		flag=true; 
		cout<<ans[i];
		}		
		}
	}
 }
}
