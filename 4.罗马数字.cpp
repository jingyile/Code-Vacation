/*��Ҫ֪���������ֵı�ʾ���ɣ���Ŀ�Ѿ����ܵıȽ������
Ȼ����ǰ�ÿ�����Ŷ�Ӧ���������ݹ��ɽ������
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
            if(c[i]>c[i-1])//����Ĵ���ǰ���
                sum+=c[i]-2*c[i-1];
            if(c[i]<=c[i-1])//����С�ڵ���ǰ���
                sum+=c[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
