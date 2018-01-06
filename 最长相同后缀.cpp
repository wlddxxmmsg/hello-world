#include <stdio.h>
int main(){
	char a[2000];
	char b[2000];
	int ta = 0 , tb = 0;
	while((a[ta++]=getchar())!='\n');
	while((b[tb++]=getchar())!='\n');
	ta--;
	tb--;
	int t1 = ta-1,t2 = tb-1;
	int c = 0;
	while(t1>=0 && t2>=0){
		if(a[t1]==b[t2]){
			c++;
			t1--;
			t2--;
		}
		else break;
	}
	if(!c)
	printf("null\n");
	else{
		for(int i = ta-c; i < ta ; i++)
		printf("%c",a[i]);
		printf("\n");
	}
} 
