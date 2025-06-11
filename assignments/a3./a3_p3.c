/*
CH-230-A
a3_p3.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>

int main() {
   int cm;
   printf("enter distance in cm");
   scanf("%d", &cm);
   float km;
   km = (float)cm / 1000;
   printf("the distance in km is %f", km);
    return 0;
}