/*
CH-230-A
a2_p1.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    double num1, num2;
    printf("enter first double");
    scanf("%lf", &num1);
    printf("enter second double");
    scanf("%lf", &num2);
    double sumdouble;
    sumdouble = num1 + num2;
    double diffdouble;
    diffdouble = num1 - num2;
    double square;
    square = num1 * num1;
    printf("the sum of the double is %lf", sumdouble);
    printf("\nthe difference is %lf", diffdouble);
    printf("\nthe sqaure of double 1 is %lf\n", square);
    
    int int1, int2;
    printf("\nnow enter 2 integers");
    scanf("%d", &int1);
    scanf("%d", &int2);
    int sum;
    sum = int1 + int2;
    int product;
    product = int1 * int2;
    printf("the sum of the integers is %d and the product is %d\n", sum, product);
    
    char c1, c2;
    printf("\nenter 2 chars");
    scanf("%c", &c1);
    scanf("%c", &c2);
    int sumchar;
    sumchar = c1 + c2;
    int productchar;
    productchar = c1 * c2;
    printf("the sum of the char is %d and the product is %d as decimals", sumchar, productchar);
    printf("the sum of char is %c and product is %c but as chars", (char)sumchar, (char)productchar);
    return 0;
}