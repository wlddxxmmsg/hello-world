#include <stdio.h>
int main() {
	int haha[150003];
	for(int i = 1 ; i <= 1300 ; ++i) {
		int n;
		n = i*100;
		int anss;
		double ans = 0;
		if(n<=3500) {
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		n -= 3500;
		if(n<=1500) {
			ans += 1.0*n*0.03;
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		ans += 0.03*1500;
		if(n<=4500) {
			ans += 1.0*(n-1500)*0.1;
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		ans += 0.1*(4500-1500);
		if(n<=9000) {
			ans += 1.0*(n-4500)*0.2;
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		ans += 0.2*(9000-4500);
		if(n<=35000) {
			ans += 1.0*(n-9000)*0.25;
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		ans += 0.25*(35000-9000);
		if(n<=55000) {
			ans += 1.0*(n-35000)*0.3;
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		ans += 0.3*(55000-35000);
		if(n<=80000) {
			ans += 1.0*(n-55000)*0.35;
			anss = ans;
			haha[i*100-anss] = i*100;
			continue;
		}
		ans += 0.35*(80000-55000);
		ans += 0.45*(n-80000);
		anss = ans;
		haha[i*100-anss] = i*100;
	}
		int n;
		scanf("%d",&n);
		printf("%d\n",haha[n]);
}
