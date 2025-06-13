/*
CH-230-A
a4_p1.c
yassin youssef
yyoussef@constructor.university
*/

#include <stdio.h>

int main() {
    double Llimit, Ulimit, stepsize;
    printf("enter lower limit\n");
    scanf("%lf",&Llimit);
    printf("enter upper limit\n");
    scanf("%lf", &Ulimit);
    printf("enter stepsize\n");
    scanf("%lf", &stepsize);
    double pi = 3.14159265359;
    double x;
    double area;
    double perimeter;
    for ( x = Llimit; x<= Ulimit; x+=stepsize){
        area = pi * x * x;
        perimeter = 2 * pi * x;
        printf("%lf\t %lf\t %lf \n", x, area, perimeter);
    }
    return 0;
}
