#include<iostream>
#include<memory.h>
using namespace std;
#define maxn 10000
int k=0;
int prime[maxn];
int vis[maxn];
void isprime()
{
	memset(vis,1,sizeof(vis));
	vis[0]=0,vis[1]=0;
	for(int i=2;i<=maxn;i++)
	{
		if(vis[i])
		{
			prime[k++]=i;
			for(int j=i;j*i<=maxn;j++)
			vis[j*i]=0;
		}
	}
 } 
 int fx()
{
    int i,d,n;
  for(i=0;i<k;i++)//枚举素数
{
    int x=prime[i];
    for(d=1;d<1000;d++)//枚举公差d
    {
        for(n=1;n<10;n++)//长度
        {
            if(!vis[x+n*d])
                break;
        }
        if(n>=10)
            return d;
    }
}
}

 int main()
 {
 	isprime();
 cout<<fx();
 return 0;
 }
