#include<bits/stdc++.h> 
using namespace std;
int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
bool judge()
{
	int sum1=a[0]+a[1]+a[2]+a[3];
	int sum2=a[4]+a[5]+a[6]+a[7];
	int sum3=a[8]+a[9]+a[10]+a[11];
	int sum4=a[12]+a[13]+a[14]+a[15];
	if(sum1!=sum2)
	return false;
	if(sum1!=sum3)
	return false;
	if(sum1!=sum4)
	return false;
	if(sum2!=sum3)
	return false;
	if(sum2!=sum4)
	return false;
	if(sum3!=sum4)
	return false;
	int sum5=a[0]+a[4]+a[8]+a[12];
	int sum6=a[1]+a[5]+a[9]+a[13];
	int sum7=a[2]+a[6]+a[10]+a[14];
	int sum8=a[3]+a[7]+a[11]+a[15];
	if(sum5!=sum6)
	return false;
	if(sum5!=sum7)
	return false;
	if(sum5!=sum8)
	return false;
	if(sum6!=sum7)
	return false;
	if(sum6!=sum8)
	return false;
	if(sum7!=sum8)
	return false;
	int sum9=a[0]+a[5]+a[10]+a[15];
	int sum10=a[3]+a[6]+a[9]+a[12];
	if(sum9!=sum10)
	return false;
	if(sum1!=sum5)
	return false;
	if(sum5!=sum9)
	return false;
	return true;	
}
int main()
{
	int cnt=0;
	do{
		if(judge())
		cnt++;
	}while(next_permutation(a+1,a+16));
	cout<<cnt;
	return 0;
}
