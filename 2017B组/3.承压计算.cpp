#include <stdio.h>
using namespace std;
double a[35][35];
int main()
{
    int i,j;
    for(i=1;i<30;i++)
        for(j=1;j<=i;j++)
    {
        scanf("%lf",&a[i][j]);
    }
    for(i=1;i<=30;i++)
    {
        for(j=1;j<=i;j++)
        {
           a[i+1][j]+=a[i][j]/2;
           a[i+1][j+1]+=a[i][j]/2;
        }
    }
    double maxx,minn;
    maxx=minn=a[30][1];
    for(i=1;i<=30;i++)
    {
        if(a[30][i]>maxx)
            maxx=a[30][i];
        if(a[30][i]<minn)
            minn=a[30][i];
    }
printf("%lf",maxx*2086458231/minn);
    return 0;
}
