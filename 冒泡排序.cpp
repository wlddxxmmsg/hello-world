#include<stdio.h>
int main(){
	int n,a[20];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<n;i++){
		for(int j=1;j<=n-i+1;j++){
		    if(a[j]>a[j+1]){
			  int t=a[j+1];
			  a[j+1]=a[j];
			  a[j]=t;
		    }
	    } 
		for(int j=1;j<n;j++)
		printf("%d",a[j]);
	    printf("%d",a[n]);
	    printf("\n");
	}
	return 0;
}
