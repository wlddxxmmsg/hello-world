#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100  //������λ��,���޸�; 
void fanzhuan(char *x);  //��ת�ַ���,�������;
char *jiafa(char *x, char *y); //�߾��ȼӷ�����
int main(void){
    char num1[SIZE] = {0};
    char num2[SIZE] = {0};
    printf("�������һ����:"); 
    gets(num1);
    printf("������ڶ�����:"); 
    gets(num2);
    printf("��ӽ��:%s\n", jiafa(num1, num2));
    return 0;
}
void fanzhuan(char *x){
    char t = 0;
    for(size_t i = 0, j = strlen(x) - 1; i < j; ++i, --j){
        t = x[i];
        x[i] = x[j];
        x[j] = t;
    }
}
char *jiafa(char *x, char *y){
    fanzhuan(x);
    fanzhuan(y);
    char *temp = (char*)calloc(SIZE + 1,sizeof(char));
    char *t1 = strlen(x) < strlen(y) ? x : y;
    char jinwei = 0;
    size_t i = 0;
    for(; i < strlen(t1); ++i){
        if(x[i] + y[i] + jinwei > 'i'){
            temp[i] =  x[i] + y[i] + jinwei - ':';
            jinwei = 1; 
        }
        else{
            temp[i] = x[i] + y[i] + jinwei - '0';
            jinwei = 0;
        }
    }
    char *t2 = strlen(x) > strlen(y) ? x : y;
    for(i = strlen(t1); i < strlen(t2); ++i){
        if(t2[i] + jinwei > '9'){
            temp[i] = t2[i] + jinwei - 10;
            jinwei = 1;
        }
        else{
            temp[i] = t2[i] + jinwei;
            jinwei = 0;
        }
    }
    if(jinwei)
    temp[i] = '1';
    fanzhuan(temp);
    return temp;
}
