#include<stdio.h>
int hexcmp(int a,int b ){
	if(a>b)
	printf("%d",1);
	else if(a=b)
	printf("%d",0);
	else
	printf("%d",-1);
	return 0;
}
int main(){
	int a, b;
	scanf("%x  %x", &a, &b);
	hexcmp( a,  b);
	return 0;
}
