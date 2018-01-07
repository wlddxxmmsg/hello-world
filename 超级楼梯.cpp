#include <stdio.h>
int d[41];
int main() {
	int a,n;
	d[2] = 1;
	d[3] = 2;
	for(int i = 4 ; i <= 40 ; i++)
	d[i] += d[i-1]+d[i-2];
	scanf("%d",&a);
	while(a--) {
		scanf("%d",&n);
		printf("%d\n",d[n]);
	}
}
