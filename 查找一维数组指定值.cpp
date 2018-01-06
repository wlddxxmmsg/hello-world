#include <stdio.h>
int main() {
	int n,x,a[2000];
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	scanf("%d",&a[i]);
	scanf("%d",&x);
	int b = 0;
	for(int i = 0 ; i < n ; i++) {
		if(a[i]==x) {
			printf("%d ",i);
			b = 1;
		}
	}
	if(!b)
	printf("-1\n");
	else
	printf("\n");
}	
