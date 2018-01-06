#include<stdio.h>
int main(){
	char a[2333];
	char b[2333];
	int lena = 0,lenb = 0;
	while((a[lena++]=getchar())!='\n');
	while((b[lenb++]=getchar())!='\n');
	lena--;lenb--;
	int tmp = 1;
	int aa = 0;
	int bb = 0;
	for(int i = lena-1 ; i > 1 ; --i) {
		if('0'<=a[i] && a[i]<='9') aa += (a[i]-'0')*tmp;
		else aa += (a[i]-'a'+10)*tmp;
		tmp *= 16;
	}
	tmp = 1;
	for(int i = lenb-1 ; i > 1 ; --i) {
		if('0'<=b[i] && b[i]<='9') bb += (b[i]-'0')*tmp;
		else bb += (b[i]-'a'+10)*tmp;
		tmp *= 16;
	}
	if(aa>bb) printf("1\n");
	if(aa==bb) printf("0\n");
	if(aa<bb) printf("-1\n");
}
