/*
CH-230-A
a3_p6.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>

float to_pounds(int kg, int g) {
    float totalkg;
    totalkg = kg + (g/1000);
    return  totalkg * 2.2;
}

int main() {
    int kg, g;
    printf("Enter weight in kg\n ");
    scanf("%d", &kg);
    printf("Enter weight in g\n");
    scanf("%d", &g);
    float pounds = to_pounds(kg, g);
    printf("Weight in pounds %f\n", pounds);
    return 0;
}