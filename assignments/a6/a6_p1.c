/*
CH-230-A
a6_p1.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
void swapint(int *a, int *b) {
    int n = *a;
    *a = *b;
    *b = n;
}/*swapping the integers*/
void swapdouble(double *a, double *b) {
    double n = *a;
    *a = *b;
    *b = n;
}/*swapping the doubles*/
int main() {
    int int1, int2;
    double double1, double2;
    printf("enter 2 integers\n");
    scanf("%d %d", &int1, &int2);/*scanning integers*/
    printf("enter 2 doubles\n");
    scanf("%lf %lf", &double1, &double2);/*scanning doubles*/
    swapint(&int1, &int2);
    swapdouble(&double1, &double2);
    /*inserting fnctions to run code*/
    printf("after swapping:\n");
    printf("%d\n%d\n", int1, int2);
    printf("%lf\n%lf\n", double1, double2);
    /*printing*/
    return 0;
}
