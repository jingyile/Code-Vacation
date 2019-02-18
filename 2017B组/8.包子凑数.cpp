#include <stdio.h>
using namespace std;
int a[100];
#define maxv 10010
int vis[maxv];
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    int x=a[1];
    for(int i=2; i<=n; i++)
        x=gcd(x,a[i]);
    if(x!=1)
        printf("INF\n");
    else
    {
        vis[0]=1;
        for(int i=1; i<=n; i++)
            for(int j=1; j<maxv; j++)
            {
                if(a[i]>j)
                {
                    continue;
                }
                if(vis[j-a[i]]==1)
                        vis[j]=1;
            }
    for(int i=1; i<maxv; i++)
        {
            if(!vis[i])
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
