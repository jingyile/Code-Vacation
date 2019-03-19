#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int a,b;
	int cnt=0;
	scanf("%d/%d",&n,&m);
	for(a=2;a<=10000;a++)
	for(b=1;b<a;b++)
	{
		if(a*b*n==(m*b+m*a))
		cnt++;
		//printf("1/%d+1/%d\n",a,b);
	}
	cout<<cnt;
	return 0;
 } 
