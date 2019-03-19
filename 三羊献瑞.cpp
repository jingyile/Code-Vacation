#include<bits/stdc++.h>
using namespace std;
int main()
{
for(int b=2;b<=9;b++)
for(int c=2;c<=9;c++)
for(int d=2;d<=9;d++)
for(int g=2;g<=9;g++)
for(int h=2;h<=9;h++)
{
	if(b!=9&&c!=9&&d!=9&&g!=9&&h!=9)
	if(b!=c&&b!=d&&b!=g&&b!=h)
	if(c!=d&&c!=g&&c!=h)
	if(d!=g&&d!=h)
	if(g!=h)
	if((9000+b*100+c*10+d)+(1000+g*10+b)==(10000+c*100+b*10+h))
	{
//		cout<<9<<b<<c<<d<<endl;
//		cout<<10<<g<<b<<endl;
//		cout<<10<<c<<b<<h<<endl;
		cout<<10<<g<<b<<endl;
	}
}
return 0;
}
