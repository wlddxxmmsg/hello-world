#include<stdio.h>
int M(int a,int b){
	return a>b?a:b;
}
int A(int a){
	return a>0?a:-1*a;
}
int main(){
	int n,a[1000],m=0;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++)
	scanf("%d",&a[i]);
	for(int i = 2 ; i <= n ; i++){
		m=M(m,A(a[i]-a[i-1]));
	}
	printf("%d\n",m);
}
