#include <stdio.h>
#include <string.h>
char c[6][9] = {
'-','-','*','*','-','*','*','-','-',
'-','*','-','*','*','*','*','*','-',
'-','*','-','-','-','-','*','*','-',
'-','-','*','-','-','*','*','-','-',
'-','-','-','*','*','*','-','-','-',
'-','-','-','-','*','-','-','-','-'
};
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int main() {
	int n;
	scanf("%d",&n);
	if(n<=0 || n>=8) {
		printf("Input Error\n");
		return 0;
	}
	int a = 0;
	for(int i = 0 ; i < 6 ; ++i) {
		for(int j = 0 ; j < 9 ; ++j) {
			if(c[i][j]!='*') continue;
			int ca = 0;
			for(int k = 0 ; k < 8 ; ++k) {
				int x = i+dx[k];
				int y = j+dy[k];
				if(x>=0 && x<6 && y>=0 && y<9 && c[x][y]=='-') ca++;
			}
			if(ca==n) a++;
		}
	}
	printf("%d\n",a);
}
