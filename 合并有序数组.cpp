#include<stdio.h>
int main(){
	int t;
	int a[3]={1,3,5};
	int b[3]={2,4,6};
	int c[6];
	for(int i=0;i<3;i++){
		c[i]=a[i];
		c[i+3]=b[i];
	} 
	for(int i=1;i<6;i++)
	for(int j=1;j<6-i;j++)
	if(c[j]>c[j+1]){
		t=c[j];
		c[j]=c[j+1];
		c[j+1]=t;
	}
	for(int i=0;i<6;i++)
	printf("%d ",c[i]);
	return 0;
}
