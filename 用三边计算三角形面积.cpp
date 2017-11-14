#include<stdio.h>
#include<math.h>
int main(){
	int T,i=0;
	float a, b, c, p=0, s=0;
	scanf("%d\n", &T);
	for(i=1;i <= T;i++){
		scanf("%f %f %f", &a, &b, &c);
		if(a+b>c&&a+c>b&&b+c>a){
			p = (a + b + c)/2;
			s = sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.2f\n", s);
		}
		else
		printf("error");
	}
	return 0; 
}
 
