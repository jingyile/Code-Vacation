#include<iostream>
using namespace std;
int main()
{
	int sum=1225;
	int tmp,res;
	for(int i=1;i<47;i++)
	{
	tmp=sum-(i+i+1)+i*(i+1);
	for(int j=i+2;j<49;j+=2)
	{
	res=tmp-(j+j+1)+j*(j+1);
	if(res==2015)
	cout<<i<<" "<<j<<endl;
}}
	return 0;
}
