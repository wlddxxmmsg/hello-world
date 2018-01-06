#include <stdio.h>
int main() {
	int n,m;
	int a[200];
	scanf("%d %d",&m,&n);
	int b;
	scanf("%d",&b);
	if(!b) n = -n+m;
	for(int i = 1 ; i <= m ; i++){
		scanf("%d",&a[i]);
		a[i+m] = a[i];
	}
	for(int i = 1+n ; i <= m+n ; i++)
	printf("%d ",a[i]);
	printf("\n");
}
