/*��̫�ѵ�һ���⣬����ƿ������������ģ�
���Ǵӵ�һ��ƿ�ӿ�ʼ���Ѳ�����ȷλ�õ�ƿ��
����ȷλ�ý��н�������¼�����������ɡ�
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
