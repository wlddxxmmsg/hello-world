#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='A'&& a<='Z'){
		a=a-'A'+'a';
		printf("%c\n", a);
	}
	else if(a>='a'&& a<='z'){
		a=a-'a'+'A';
		printf("%c\n", a);
	}
	else printf("error");
	return 0;
}
