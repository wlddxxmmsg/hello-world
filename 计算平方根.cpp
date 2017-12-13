#include<math.h>
#include<stdio.h>
int main(){
	int n,i=0;
	float m,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%f",&m);
		if(m>=0){
			x=sqrt(m);
			printf("%.2f\n",x);
		}
		else
		printf("ERROR\n");
	} 
    return 0;
}
