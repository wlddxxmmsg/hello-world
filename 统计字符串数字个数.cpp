#include <stdio.h>
#include <string.h>
int main() {
	char a[2000];
	char b[2000];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int lena = 0;
	int lenb = 0;
	while((a[lena++]=getchar())!='\n');lena--;
	int ans = 0;
	for(int i = 0 ; i < lena ; ++i) {
		if(a[i]>='0' && a[i]<='9') {
			ans++;
			while(a[i+1]>='0' && a[i+1]<='9' )i++;
		}
	}
	printf("%d\n",ans);
}
