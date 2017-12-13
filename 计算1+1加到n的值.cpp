#include<stdio.h>
int fx(int n){
	int s=0,i=0;
	for(i=0;i<=n;i++)
	s=i+s;
	if(n>1)
	s=s+fx(n-1);
	return s;
}
int main(){
	int s=0,n,i=0;
	scanf("%d", &n);
	s=fx(n);
	printf("%d", s);
	return 0;
} 
