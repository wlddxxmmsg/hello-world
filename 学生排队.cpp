#include <stdio.h>
int main() {
	int m,n,a[1001],b[1001];
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		a[i] = i;
		b[i] = i;
	}
	scanf("%d",&m);
	for(int i = 1 ; i <= m ; i++) {
		int p,q;
		scanf("%d%d",&p,&q);
		if(q>0) {
			for(int j = a[p] ; j < a[p]+q ; j++) {
				a[b[j+1]] = j;
				b[j] = b[j+1];
			}
			a[p] = a[p]+q;
			b[a[p]] = p;
		} 
		else {
			q*=-1;
			for(int j = a[p] ; j > a[p]-q ; j--) {
				a[b[j-1]] = j;
				b[j] = b[j-1];
			}
			a[p] = a[p]-q;
			b[a[p]] = p;
		}
	}
	for(int i = 1 ; i <= n ; ++i) printf("%d ",b[i]);
	printf("\n");
}
