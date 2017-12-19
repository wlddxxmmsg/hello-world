#include<stdio.h>
int main(){
	int i,j,d,n,m,a[100];
	scanf("%d\n", &n);
	for(i=1;i<=n;i++){
		scanf("%d",&m);
		if(m=1)
		printf("ERROR\n");
		else{
			for(j=1;j<=m;j++)
			scanf("%d",&a[j]);
			int c=1;
			for(j=2;j<=m-1;j++)
			if(a[j]<a[c])
			c=j;
			d=a[m];
			a[m]=a[c];
			a[c]=d;
			int e=1;
			for(j=2;j<=m-2;j++)
			if(a[j]<a[e])
			e=j;
			if(a[e]=a[m])
			printf("ERROR\n");
			else printf("%d\n",a[e]);
		}	
	}
	return 0;
} 
