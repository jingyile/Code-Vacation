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
ĳ������ʶһ���ѡ�
���ʼ�����ʱ����������˵��
���ҵ������Ǹ�2λ�����ұȶ��Ӵ�27��,
������ҵ��������λ���ֽ���λ�ã��պþ����Ҷ��ӵ����䡱

������㣺���ѵ�����һ���ж����ֿ��������

��ʾ��30���������һ�ֿ���Ŷ.
*/
