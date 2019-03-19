/*需要知道罗马数字的表示规律，题目已经介绍的比较清楚，
然后就是把每个符号对应整数，根据规律进行求和
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[7]={'I','V','X','L','C','D','M'};
    int b[7]={1,5,10,50,100,500,1000};
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[100];
        gets(str);
        int i,j;
        int c[100];
        for(i=0;i<strlen(str);i++)
            for(j=0;j<7;j++)
        {
            if(str[i]==a[j])
                c[i]=b[j];
        }
        int sum;
        sum=c[0];
        for(i=1;i<strlen(str);i++)
        {
            if(c[i]>c[i-1])//后面的大于前面的
                sum+=c[i]-2*c[i-1];
            if(c[i]<=c[i-1])//后面小于等于前面的
                sum+=c[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
