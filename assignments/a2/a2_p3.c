/*
CH-230-A
a2_p3.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    int weeks, days, hours;
    printf("enter number of weeks");
    scanf("%d", &weeks);
    printf("enter number of days");
    scanf("%d", &days);
    printf("enter number of hours");
    scanf("%d", &hours);
    int tothours;
    tothours = (weeks * 7 * 24) + (days * 24) + hours;
    printf("the total number of hours is %d", tothours);
    return 0;
}