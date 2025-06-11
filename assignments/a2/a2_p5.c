/*
CH-230-A
a2_p5.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    int a;
    printf("enter a value for a");
    scanf("%d", &a);
    printf("the value chosen is %d", a);
    int *ptr_a = &a;
    printf("\nthe adress of value is %p", ptr_a);
    *ptr_a += 5;
    printf("\nthe new value is %d", a);
    printf("\nthe new adress is %p", ptr_a);
    return 0;
}