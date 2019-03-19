#include<iostream>
using namespace std;
int t = 111 * 111 * 111;
int main() {
  int flag = 0;
  for(int i = 1;i <= t; i+=2) { //起点 
    int sum = i, p = i;//sum初始化为起点值，以及p记录当前项的值
    while(sum < t) {
      p += 2;//连续奇数，p逐项+2
      sum += p;
      if(sum == t) flag = 1;//加完之后刚好等于t
    } 
    if(flag) {
      cout << i << endl;
      break;
    }
  } 
  return 0;  
} 
