#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int w,m,n;
	cin>>w>>n>>m;
	int row1=(n-1)/w;//×¢ÒâÎªn-1
	int row2=(m-1)/w;
	int column1,column2;
	if(row1%2!=0)
	column1=n%w;
	else if(row1%2==0)
	column1=w-n%w+1;
	if(row2%2!=0)
	column2=m%w;
	else if(row2%2==0)
	column2=w-m%w+1;
	int ans=abs(row1-row2)+abs(column1-column2);
	cout<<ans;
	return 0;
}
