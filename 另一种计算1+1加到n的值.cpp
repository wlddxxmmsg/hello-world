#include<stdio.h>
int fx(int n){
	int s=0,i;
	for(i=1;i<=n;i++)
    s+=i;
    return s;
}
int main(){
    int n,s=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s+=fx(i);
    printf("%d",s);
    return 0;
}
