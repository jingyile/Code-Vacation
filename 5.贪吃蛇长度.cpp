#include<iostream>
#include<string.h>
using namespace std;
char str[]= {"H########### #  # #   #  # #     #### #  #  # #  # #  #######@###             ###       ####     #  # #       #  #     #  #            |####@#######@###     #  #           #   #       #        #  #            T#####       #        #  #   ##      # # ###  ### ########################       ####       #####################@######################################### "};
int main() {
	int cnt=0;
	int len=strlen(str);
	for(int i=0; i<len; i++) {
		if(str[i]=='#')
			cnt++;
		if(str[i]=='@')
			cnt+=2;
	}
	cout<<cnt+2;
}
