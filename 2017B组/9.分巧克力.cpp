#include<stdio.h>
int n,k;
#define maxn 100010
int H[maxn],W[maxn];
#define max(a,b) a>b? a:b
bool judge(int x)
{
	int ans=0;
	for(int i=1;i<=n;i++)
	ans+=(H[i]/x)*(W[i]/x);
	if(ans<k)
	return false;
	else
	return true;
}
int main()
{
	scanf("%d%d",&n,&k);
		int up=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&H[i],&W[i]);
		up=max(max(H[i],W[i]),up);//求出最大边长 
	}
	int l=1,r=up,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(judge(mid))
		l=mid+1;
		else
		r=mid-1;
	}
	printf("%d",r);
	return 0;	
}
