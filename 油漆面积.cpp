#include<iostream>
using namespace std;
typedef struct{
	int x1,y1;
	int x2,y2;
}Pot;
Pot a[10005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d %d %d %d",&a[i].x1,&a[i].y1,&a[i].x2,&a[i].y2);
	
}
