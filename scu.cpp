#include <stdio.h>
int main() {
	int x1,y1,z1,r1,x2,y2,z2,r2,x,y,z;
	int n;
	scanf("%d",&n);
    while(n--) {
	    scanf("%d%d%d%d%d%d%d%d%d%d%d",&x1,&y1,&z1,&r1,&x2,&y2,&z2,&r2,&x,&y,&z);
        int a = 2*(x2-x1),b = 2*(y2-y1),c = 2*(z2-z1);
        int k = r1*r1-r2*r2+x2*x2-x1*x1+y2*y2-y1*y1+z2*z2-z1*z1;
        int t = k-a*x-b*y-c*z;
        if(t==0) printf("No\n");
        else printf("Yes\n");
    }
}
