#include <stdio.h>
int main() {
	int n,a=0,x,y,z;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d%d%d",&x,&y,&z);
		if(x+y+z>a)
		a = x+y+z;
	}
	printf("%d\n",a);
}
