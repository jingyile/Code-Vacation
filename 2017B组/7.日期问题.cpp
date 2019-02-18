//年月日 月日年 日月年
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    //年月日
    if(a>=60&&b>=1&&b<=12)
        printf("19%02d-%02d-%02d\n",a,b,c);
    if(a<60)
        printf("20%02d-%02d-%02d\n",a,b,c);
//月日年
    if(a>=1&&a<=12&&c>=60)
        printf("19%02d-%02d-%02d\n",c,a,b);
    if(a>=1&&a<=12&&c<60)
        printf("20%02d-%02d-%02d\n",c,a,b);
//日月年
    if(b>=1&&b<=12&&c>=60)
        printf("19%02d-%02d-%02d\n",c,b,a);
    if(b>=1&&b<=15&&c<60)
        printf("20%02d-%02d-%02d\n",c,b,a);
    return 0;
}
