#include<stdio.h>
int main() {
	int n;
	int a[20013];
	scanf("%d",&n);
	n=n%10;
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
		a[i+10] = a[i];
	}
	for(int i=1+n;i<=10+n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
