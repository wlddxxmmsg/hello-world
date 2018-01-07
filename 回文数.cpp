#include <stdio.h>
int n;
int a[200];
int check1(int x) {
	int cnt = 0,tmp = 0;
	while(x) {
		a[++cnt] = x%10;
		tmp += a[cnt];
		x/=10;
	}
	if(tmp!=n) return 0;
	for(int i = 1 ; i <= cnt/2 ; ++i)
		if(a[i]!=a[cnt-i+1]) return 0;
	return 1;
}
int main() {
	scanf("%d",&n);
	int f = 0;
	for(int i = 10000 ; i <= 999999 ; ++i) {
		if(!check1(i)) continue;
		f = 1;
		printf("%d\n",i);
	}
	if(!f) printf("-1\n");
}
