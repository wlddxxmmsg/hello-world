#include <stdio.h>
#include <string.h>
struct hp {
	char name[23];
	int s;
}a[103];
int cmp(struct hp a,struct hp b) {
	return a.s>b.s;
}
int n;
int main() {
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) {
		scanf("%s",a[i].name);
		int x,y;
		scanf("%d%d",&x,&y);
		a[i].s = x+y;
	}
	for(int i = 1 ; i < n ; ++i) {
		int maxx = i;
		for(int j = i+1 ; j <= n ; ++j)
			if(cmp(a[j],a[maxx])) maxx = j;
		struct hp c = a[maxx];
		a[maxx] = a[i];
		a[i] = c;
	}
	for(int i = 1 ; i <= n ; ++i) {
		int len = strlen(a[i].name);
		for(int j = 0 ; j < len ; ++j) printf("%c",a[i].name[j]);
		printf(" %d\n",a[i].s);
	}
}
