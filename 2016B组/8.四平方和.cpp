#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int maxn,n;
	cin>>n;
	maxn=sqrt(n);
	for(int a=0;a<maxn;a++)
	for(int b=0;b<maxn;b++)
	for(int c=0;c<maxn;c++)
	{
		int d=sqrt(n-a*a-b*b-c*c);
		if(a*a+b*b+c*c+d*d==n)
		{
				cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
				return 0;
		}
	}
 } 
