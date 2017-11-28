#include<stdio.h> 
int main(){
	int T,b;
	scanf("%d/n",&T);
	for(int i=1;i <= T;i++){
		int c=0;
		scanf("%d",&b);
		while(b!=1){
			if(b%2!=0)
			b=(b*3+1)/2;
			else
			b=b/2;
			c++;
		}
		printf("%d\n" ,c);
	}
	return 0;
}
