#include<iostream>
using namespace std;
int t = 111 * 111 * 111;
int main() {
  int flag = 0;
  for(int i = 1;i <= t; i+=2) { //��� 
    int sum = i, p = i;//sum��ʼ��Ϊ���ֵ���Լ�p��¼��ǰ���ֵ
    while(sum < t) {
      p += 2;//����������p����+2
      sum += p;
      if(sum == t) flag = 1;//����֮��պõ���t
    } 
    if(flag) {
      cout << i << endl;
      break;
    }
  } 
  return 0;  
} 
