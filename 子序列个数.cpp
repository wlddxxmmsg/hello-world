#include <stdio.h>
int main() {
	char a[2000];
	char b[2000];
	int la = 0;
	int lb = 0;
	while((a[la++]=getchar())!='\n');
	la--;
	while((b[lb++]=getchar())!='\n');
	lb--;
	int ans = 0, j = 0;
	for(int i = 0 ; i < la ; i++) {
		j = 0;
		while(a[i+j]==b[j] && j<lb && i+j<la)j++;
		if(j==lb) ans++;
	}
	printf("%d\n",ans);
}
