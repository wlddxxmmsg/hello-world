#include <stdio.h>
int n;
int len[233],lena;
char b[233][233];
char a[233];
int equal(char* x,char* y,int lenx,int leny) {
	if(lenx!=leny) return 0;
	for(int i = 1 ; i <= lenx ; ++i)
		if(x[i]!=y[i]) return 0;
	return 1;
}
int main() {
	scanf("%d",&n);
	getchar();
	for(int i = 1 ; i <= n ; ++i) {
		while((b[i][++len[i]]=getchar())!='\n');
		len[i]--;
	}
	int cnt = 0;
	while((a[++lena]=getchar())!='\n');
	lena--;
	for(int i = 1 ; i <= n ; ++i) {
		if(equal(a,b[i],lena,len[i])) cnt++;
	}
	printf("%d\n",cnt);
}
