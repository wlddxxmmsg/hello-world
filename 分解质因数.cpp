#include<stdio.h>
int main(){
	int x,k,a[20],c;
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		c=0;
		scanf("%d",&x);
		for(int j=2;j<=x;j++){
			while((x%j)==0 && x!=1){
				a[++c]=j;
				x=x/j;
			}
		}
		for(int j=1;j<c;j++)
		printf("%d*",a[j]);
		printf("%d\n",a[c]);
	}
	return 0;
} 
