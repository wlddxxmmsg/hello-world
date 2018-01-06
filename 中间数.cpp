#include <stdio.h>
int main() {
	int n,a[1001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		int b=0,s=0;
		for(int j=1;j<=n;j++){
			if(a[i]>a[j])
			s++;
			if(a[i]<a[j])
			b++;
		}
		if(b==s){
			printf("%d\n",a[i]);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
