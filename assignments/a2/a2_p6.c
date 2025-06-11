/*
CH-230-A
a2_p6.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    double x, y;
    printf("enter value for x and y");
    scanf("%lf", &x);
    scanf("%lf", &y);
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;
    printf("ptr_one = %p", ptr_one);
    printf("\nptr_two = %p", ptr_two);
    printf("\nptr_three = %p", ptr_three);
    if((ptr_one==ptr_two)&&(ptr_one!=ptr_three)){
        printf("\nptr_one and ptr_two have exact same adress\n ptr_one and ptr_three have different adress");
    }
    else{
        printf("ptr_one and ptr_two have different adresses");
    }
    return 0;
}