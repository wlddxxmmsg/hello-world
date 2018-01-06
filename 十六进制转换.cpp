#include <stdio.h>
int main() {
	char a[2333];
	char b[2333];
	int lena = 0,lenb = 0;
	while((a[lena++]=getchar())!='\n');
	lena--;lenb--;
	int tmp = 1;
	int aa = 0;
	int bb = 0;
	for(int i = lena-1 ; i > 1 ; --i) {
		if('0'<=a[i] && a[i]<='9') aa += (a[i]-'0')*tmp;
		else aa += (a[i]-'a'+10)*tmp;
		tmp *= 16;
	}
	printf("%d\n",aa);
}
