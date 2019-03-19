#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,x,y,d,e,f,g;
    for(i=100; i<=999; i++)
    {
        c=i%10;
        b=i/10%10;
        a=i/100;
        x =(a*100+b*10+c)*(a*100+b*10+c);
        d=x/10%10;
        e=x/100%10;
        f=x/1000%10;
        g=x/10000%10;
        if(x%10==b&&x/100000==a&&d==g&&d!=a&&d!=b&&d!=c&&d!=e&&d!=f&&e!=a&&e!=b&&e!=c&&e!=f&&f!=a&&f!=b&&f!=c)
        {
            y=a*100+b*10+c;
            printf("%d\n",y);
        }
    }
    return 0;
}
