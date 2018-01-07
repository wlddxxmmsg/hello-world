#include <stdio.h>
int main() {
	int n;
	char a[200];
	scanf("%d",&n);
	getchar();
	for(int i = 1 ; i <= n ; i++) {
		int t = 0;
		while((a[t++]=getchar())!='\n');
		t--;
		char b[200];
		int c = 0;
		for(int j = 0 ; j < t ; j++) {
			if(a[j]>='a' && a[j] <= 'z') b[++c] = a[j];
		}
		for(int j = c ; j >= 1 ; --j) printf("%c",b[j]);
		printf("\n");
	}
}
