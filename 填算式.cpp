#include<iostream>
#include<algorithm>
using namespace std;
int a[]={0,1,2,3,4,5,6,7,8,9}; 
int main()
{
	do{
		if(a[0]!=0&&a[4]!=0&&a[8]!=0)
		if(((a[0]*1000+a[1]*100+a[2]*10+a[3])-(a[4]*1000+a[5]*100+a[6]*10+a[7]))*(a[8]*10+a[9])==900)
		cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	}while(next_permutation(a,a+10));
}
