#include <stdio.h>
#include <string.h>

#define N 256
int f(char* s1, char* s2)
{
	int a[N][N];
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i,j;
	
	for(i=0; i<len1; i++) a[i][0] = 0;
	for(i=0; i<len2; i++) a[0][i] = 0;
	int max = 0;
	for(i=1; i<len1; i++){
		for(j=1; j<len2; j++){
			if(s1[i-1]==s2[j-1]) {
				a[i][j] = a[i-1][j-1]+1 ;  // МоїХ 
				if(a[i][j] > max) max = a[i][j];
			}
		}
	}
	
	return max;
}

int main()
{
	int n = f("abcdkkk", "baabcdadabc");
	printf("%d\n", n);
	return 0;
}
