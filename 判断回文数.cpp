#include<stdio.h>
int main(){
	int n, a=0, b=0;
	scanf("%d",&n);
	a=n;
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	if(b==n)
	printf("Yes");
	else
	printf("No");
	return 0;
}
