#include <stdio.h>
#include <string.h>
int dp[105][113];
int n;
char a[123][165];
char ans[100030][103];
int maxx = 0;
int t = 0;
int max(int a,int b) {return a>b?a:b;}
int cmp(char a[],char b[],int lena,int lenb) {
	int MIN = lena<lenb?lena:lenb;
	for(int i = 1 ; i <= MIN ; ++i) {
		if(a[i]<b[i]) return 1;
		if(a[i]>b[i]) return 0;
	}
	return lena<lenb;
}
int equal_(char a[],char b[],int lena,int lenb) {
	if(lena!=lenb) return 0;
	for(int i = 1 ; i <= lena ; ++i) {
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
int main() {
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) scanf("%s",a[i]+1);
	for(int i = 1 ; i <= n ; ++i) {
		for(int j = 1 ; j < i ; ++j) {
			memset(dp,0,sizeof(dp));
			int leni = strlen(a[i]+1);
			int lenj = strlen(a[j]+1);
			for(int ii = 1 ; ii <= leni ; ++ii) {
				for(int jj = 1 ; jj <= lenj ; ++jj) {
					if(a[i][ii]==a[j][jj]) {
						dp[ii][jj] = 1;
						dp[ii][jj] += dp[ii-1][jj-1];
					}
					if(dp[ii][jj]==maxx && maxx) {
						t++;
						int cnt = 0;
						for(int k = ii-dp[ii][jj]+1 ; k <= ii ; ++k)
							ans[t][++cnt] = a[i][k];
						ans[t][0] = cnt;
					}
					if(dp[ii][jj] > maxx) {
						maxx = dp[ii][jj];
						t = 1;						
						int cnt = 0;
						for(int k = ii-dp[ii][jj]+1 ; k <= ii ; ++k)
							ans[t][++cnt] = a[i][k];
						ans[t][0] = cnt;
					}
				}
			}
		}
	}
	if(!t) {
		printf("error");
		return 0;
	}
	char tmp[233];
	for(int i = 1 ; i < t ; ++i) {
		int MIN = i;
		for(int j = i+1 ; j <= t ; ++j) {
			if(cmp(ans[j],ans[MIN],ans[j][0],ans[MIN][0])) {
				int t = MIN;
				MIN = j;
				j = t;
			}
		}
		for(int j = 0 ; j <= ans[i][0] ; ++j) tmp[j] = ans[i][j];
		for(int j = 0 ; j <= ans[MIN][0] ; ++j) ans[i][j] = ans[MIN][j];
		for(int j = 0 ; j <= ans[i][0] ; ++j) ans[MIN][j] = tmp[j];
	}
	for(int i = 1 ; i <= t ; ++i) {
		if(i!=1 && equal_(ans[i],ans[i-1],ans[i][0],ans[i-1][0])) continue;
		for(int j = 1 ; j <= ans[i][0] ; ++j) printf("%c",ans[i][j]);
		printf("\n");
	}
}
