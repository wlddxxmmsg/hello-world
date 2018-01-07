#include <stdio.h>
void ex_gcd(long long a,long long b,long long *x,long long *y) {
	if(b==0) {
		*x = 1 ; 
		*y = 0;
		return ;	
	}
	ex_gcd(b,a%b,y,x);
	*y -= *x*(a/b);
}
int main() {
	long long a,n;
	while(scanf("%lld%lld",&a,&n)) {
		if(a==0) break;
		long long x = 0 , y = 0;
		ex_gcd(a,n,&x,&y);
		while(x-n>0) x-= n;
		while(x<0) x+=n;
		printf("%lld\n",x);
	}
}
