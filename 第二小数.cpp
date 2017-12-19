#include<stdio.h>
int main(){
	int i,j,d,n,m,a[100],b[100];
	scanf("%d\n", &n);
	for(i=1;i<=n;i++){
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		scanf("%d",&a[j]);
		for(int i = 1 ; i <= m-1 ; i++){
			int c=1;
			for(j=2;j<=m-i+1;j++)
			if(a[j]>a[c])
			c=j;
			d=a[m-i+1];
			a[m-i+1]=a[c];
			a[c]=d;
		}
	int e=1;
	b[e++]=a[1];
	for(j=2;j<=m;j++)
	if(a[j]!=a[j-1])
	b[e++] = a[j];
	if(e<2)
	printf("ERROR\n");
	else
	printf("%d\n",b[2]);		
	}
	return 0;
} 
