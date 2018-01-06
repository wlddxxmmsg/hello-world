#include <stdio.h>
char a[2333];
int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
void p(int k) {
	if(k==1) printf("Monday");
	if(k==2) printf("Tuesday");
	if(k==3) printf("Wednesday");
	if(k==4) printf("Thursday");
	if(k==5) printf("Friday");
	if(k==6) printf("Saturday");
	if(k==0) printf("Sunday");
	printf("\n");
}
int main() {
	for(int i = 0 ; i < 10 ; i++) a[i] = getchar();
	int year = 1000*(a[0]-'0')+100*(a[1]-'0')+10*(a[2]-'0')+a[3]-'0';
	int month = 10*(a[5]-'0')+a[6]-'0';
	int day = 10*(a[8]-'0')+a[9]-'0';
	int totday = 0;
	for(int i = 1900 ; i < year ; i++) {
		if(i%4==0 && i!=2000&&i!=1900) totday++;
		totday += 365;
	}
	for(int i = 0 ; i < month-1 ; i++) {
		totday += m[i];
	}
	if(month>2 && year%4==0 && year!=2000&&year!=1900) totday++;
	totday += day;
	p(totday%7);
}
