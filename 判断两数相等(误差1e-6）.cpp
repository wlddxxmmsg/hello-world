#include<stdio.h>
bool equalf(float x, float y){
	bool result = (x - y) < 1e-6;
	return result;
} 
int main(){
	float x = 0.01;
	float y = 0.001;
	bool result = equalf(x, y);
	printf("result: %d\n", result);
	return 0;
}
