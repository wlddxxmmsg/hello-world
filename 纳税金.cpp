#include<stdio.h>
int main(){
	double n, a=0, s=0;
	scanf("%1f", &n);
	if(n<=3500)
	s=0;
	else{
		a=n-3500;
		if(a<=1500)
		s=a*0.03;
		else if(a<=4500){
			a=a-1500;
			s=1500*0.03+a*0.1;
		}
		else if(a<=9000){
			a=a-4500;
			s=1500*0.03+3000*0.1+a*0.2;
		}
		else if(a<=35000){
			a=a-9000;
			s=1500*0.03+3000*0.1+4500*0.2+a*0.25;
		}
		else if(a<=55000){
			a=a-35000;
			s=1500*0.03+3000*0.1+4500*0.2+26000*0.25+a*0.3;
		}
		else if(a<=80000){
			a=a-55000;
			s=1500*0.03+3000*0.1+4500*0.2+26000*0.25+20000*0.3+a*0.35;
		}
		else{
			a=a-80000;
			s=1500*0.03+3000*0.1+4500*0.2+26000*0.25+20000*0.3+25000*0.35+a*0.45;
		}
	} 
	printf("%.2lf", s);
	return 0;
}
