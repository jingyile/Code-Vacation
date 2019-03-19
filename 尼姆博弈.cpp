#include<stdio.h>
int a[1000];
int main()
{
	int i=0;
	int x;
	int ans=0;
	while(scanf("%d",&x)!=EOF)
	{
		ans^=x;
	}
	if(ans==0)
	printf("Lose");
	else
	printf("Win");
	return 0;
 } 
