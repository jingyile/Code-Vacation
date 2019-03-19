#include <stdio.h>
#define maxx 1000
#define INF 9999999
int ans,maxlen;
int a[maxx][maxx];
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    int p,q,d;
    scanf("%d",&n);
    int i,j;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=INF;
        }
    for(i=1; i<n; i++)
    {
        scanf("%d %d %d",&p,&q,&d);
        a[p][q]=d;
        a[q][p]=d;
    }
//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=n; j++)
//            printf("%d ",a[i][j]);
//        printf("\n");
//    }
    int k;
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                if(a[i][j]!=INF&&maxlen<a[i][j])
                    maxlen=a[i][j];
            }
    ans=10*maxlen+(maxlen+1)*maxlen/2;
    printf("%d",ans);
    return 0;
}
