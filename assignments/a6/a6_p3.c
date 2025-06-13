/*
CH-230-A
a6_p3.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#define MIN(A, B, C) ((A) < (B) ? ((A) < (C) ? (A) : (C)) : ((B) < (C) ? (B) : (C)))
#define MAX(A, B, C) ((A) > (B) ? ((A) > (C) ? (A) : (C)) : ((B) > (C) ? (B) : (C)))
/*macros for min int and max int*/
int main() {
    int x, y, z;
    printf("enter integers\n");
    scanf("%d %d %d", &x, &y, &z);/*scanning the integers*/
    double midrange = (MIN(x, y, z)+MAX(x, y, z)) / 2;
    /*the calculation of the mid range using the macros*/
    printf("the mid-range is %f\n", midrange); /*printing of mid range*/
    return 0;
}