#include <stdio.h>
char c[6][9] = {
'-','-','*','*','-','*','*','-','-',
'-','*','-','-','*','-','-','*','-',
'-','*','-','-','-','-','-','*','-',
'-','-','*','-','-','-','*','-','-',
'-','-','-','*','-','*','-','-','-',
'-','-','-','-','*','-','-','-','-'
};
int main() {
	int x,y,w,h;
	scanf("%d%d%d%d",&x,&y,&w,&h);
	if(x<1 || x>9 || y<1 || y>6 || w<1 || w>9 || h<1 || h>6 || x+w<2 || x+w>10 || y+h<2 || y+h>7) {
		printf("Input Error\n");
		return 0;
	}
	x--;y--;
	for(int i = y ; i < y+h ; i++) {
		for(int j = x ; j < x+w ; j++) printf("%c",c[i][j]);
		printf("\n");
	}
}
