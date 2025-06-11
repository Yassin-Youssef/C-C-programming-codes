/*
CH-230-A
a2_p4.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    float a, b, h;
    printf("enter value a");
    scanf("%f", &a);
    printf("\nenter value b");
    scanf("%f", &b);
    printf("\nenter value h");
    scanf("%f", &h);
    float asquare;
    asquare = a * a;
    float arect;
    arect = a * b;
    float atri;
    atri = 0.5 * a * h;
    float atrap;
    atrap = ((a + b) / 2) *h;
    printf("\nthe area of square is %f", asquare);
    printf("\nthe area of recntangle %f", arect);
    printf("\nthe area of the triangle is %f", atri);
    printf("\nthe area of the trapezoid is %f", atrap);
    return 0;
}