#include <stdio.h>
int main() {
	int n,a[101][101];
	while(scanf("%d",&n)!=EOF) {
		int cnt = 0;
		for(int i = 1 ; i <= n ; i++) {
			int x = i,y = 1;
			for(int j = 1 ; j <= i ; j++) {
				a[x][y] = ++cnt;
				x--;
				y++;
			}
		}
		for(int i = 1 ; i <= n ; i++) {
			for(int j = 1 ; j <= n-i+1 ; j++) printf("%d ",a[i][j]);
			printf("\n");
		}
	}
}
