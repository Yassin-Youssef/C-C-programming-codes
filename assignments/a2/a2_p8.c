/*
CH-230-A
a2_p8.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    int num;
    printf("enter number");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 7 == 0){
        printf("the number is divisble by 2 and 7");
    }
    else{
        printf("the number is not divisble by 2 and 7");
    }
    return 0;
}