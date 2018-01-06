#include <stdio.h>
int main() {
	int a[50][50],n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= m ; j++)
			scanf("%d",&a[i][j]);
	int c = 0;
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= m ; j++) {
			int b = 1;
			for(int k = 1 ; k <= m ; k++)
				if(a[i][k] > a[i][j])
				b = 0;
			for(int h = 1 ; h <= n ; h++)
				if(a[h][j] < a[i][j])
				b = 0;
			if(b!=0) printf("a[%d][%d]=%d ",i-1,j-1,a[i][j]),c++;
		}
	if(c==0) printf("NO\n");
	else printf("\n");
}
