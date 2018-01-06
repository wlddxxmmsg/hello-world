#include <stdio.h>
int n,a[23333];
int main() {
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) scanf("%d",&a[i]);
	for(int i = 1 ; i < n ; ++i) {
		int min = i;
		for(int j = 1+i ; j <= n ; ++j)
			if(a[min] > a[j]) min = j;
		int tmp = a[min];
		for(int j = min-1 ; j >= i ; --j) a[j+1] = a[j];
		a[i] = tmp;
		for(int j = 1 ; j <= n ; ++j) printf("%d ",a[j]);
		printf("\n");
	}
}

