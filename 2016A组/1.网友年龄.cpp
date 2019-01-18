#include<iostream>
using namespace std;
int main()
{
	int age1,age2;
	int cnt=0;
for(int i=0;i<=9;i++)
for(int j=0;j<=9;j++)
{
	age1=i*10+j;
	age2=i+10*j;
	if(age1-age2==27)
	{
		cnt++;
	}
}
cout<<cnt;
return 0;	
} 
/*
某君新认识一网友。
当问及年龄时，他的网友说：
“我的年龄是个2位数，我比儿子大27岁,
如果把我的年龄的两位数字交换位置，刚好就是我儿子的年龄”

请你计算：网友的年龄一共有多少种可能情况？

提示：30岁就是其中一种可能哦.
*/
