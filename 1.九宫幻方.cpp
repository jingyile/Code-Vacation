/*
历届试题 九宫幻方  
*/
#include<iostream>
#include<string>
using namespace std;
string ss[]= {"672159834","816357492","438951276","294753618",
              "276951438","618753294","834159672","492357816"
             };
string ans;//保存唯一结果 
bool fx(char str[],string ss) {
	for(int i=0; i<9; i++) {
		if(str[i]==ss.at(i))
			continue;
		if(str[i]=='0')
			continue;
		return false;
	}
	return true;
}
void print(string ans) {
	for(int i=0; i<9; i++) {
		if(i==2||i==5||i==8)
			cout<<ans.at(i)<<endl;
		else
			cout<<ans.at(i)<<" ";
	}
}
int main() {
	char str[10];
	char x;
	int cnt=0;
	int i=0,q=18;
	while(q--) {
		scanf("%c",&x);
		if(x!=' '&&x!='\n')
			str[i++]=x;
	}
	//cout<<str<<endl;
	for(int i=0; i<8; i++) {
		if(fx(str,ss[i])) {
			ans=ss[i];
			cnt++;
		}
	}
	if(cnt==1)
		print(ans);
	else
		cout<<"Too Many"<<endl;
}

