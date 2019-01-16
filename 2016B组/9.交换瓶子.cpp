/*不太难的一道题，由于瓶子序号是连续的，
就是从第一个瓶子开始，把不在正确位置的瓶子
往正确位置进行交换，记录交换次数即可。
*/
#include<iostream>
using namespace std;
int a[10005];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(a[i]!=i) {
			int tmp=a[i];
			a[i]=i;
			a[tmp]=tmp;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
