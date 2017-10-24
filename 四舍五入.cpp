#include<stdio.h>
#include<float.h>
double square(double x);
int main(){
	double y1=square(2.3); 
	double y2=square(2.7); 
	printf("%f---%f",y1,y2);
	return 0; 
}
//define
double square(double x){
	return int (x+0.5);
}
