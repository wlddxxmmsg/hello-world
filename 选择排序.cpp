#include<stdio.h>
int main(){
	int n,i,a[n],j,k;
	scanf("%d/n",&n);
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]); 
	return 0;
}
