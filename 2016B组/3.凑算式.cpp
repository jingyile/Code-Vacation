#include<iostream>
#include<algorithm>
using namespace std;
int a[10]={1,2,3,4,5,6,7,8,9};
bool judge()
{
	int A=a[0];
	int B=a[1];
	int C=a[2];
	int m=a[3]*100+a[4]*10+a[5];
	int n=a[6]*100+a[7]*10+a[8];
	if(B*n+C*m==(10-A)*C*n)
	return true;
	return false;
}
int main()
{
	int cnt=0;
do{
	if(judge())//Âú×ãÌõ¼ş 
	{
		cnt++;
	}
}while(next_permutation(a,a+9));
cout<<cnt;
return 0;	
}

