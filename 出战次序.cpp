#include<iostream>
using namespace std;
int h[20];
int main()
{
	h[1]=1,h[2]=2,h[3]=5;
	for(int i=4;i<=16;i++)
	h[i]=(4*i-2)*h[i-1]/(i+1);
	cout<<h[16]<<endl;
	return 0;
 } 
