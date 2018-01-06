#include<stdio.h>
int main(){
	int n,i,a[200],j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++){
		k=i;
		for(j=i+1;j<=n;j++)
		if(a[k]>a[j])
		k=j;
		int t=a[k];
		a[k]=a[i];
		a[i]=t;
		for(j=1;j<=n;j++)
		printf("%d ",a[j]);
		printf("\n");
	}
}
