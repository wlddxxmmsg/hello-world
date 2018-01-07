#include <stdio.h>
struct hp {
	int s;
	int p;
}a[13];
int cmp(struct hp a,struct hp b) {
	return a.s>b.s;
}
int main() {
	for(int i = 1 ; i <= 10 ; ++i) {
		a[i].p = i;
		int tmp = 0;
		for(int j = 1 ; j <= 6 ; ++j) {
			int x;
			scanf("%d",&x);
			tmp += x;
		}
		a[i].s = tmp;
	}
	for(int i = 1 ; i < 10 ; ++i) {
		int maxx = i;
		for(int j = i+1 ; j <= 10 ; ++j)
			if(cmp(a[j],a[maxx])) maxx = j;
		struct hp c = a[maxx];
		a[maxx] = a[i];
		a[i] = c;
	}
	for(int i = 1 ; i <= 10 ; ++i) 
		printf("%d %.2lf\n",a[i].p,(double)a[i].s/6);
}
