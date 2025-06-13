/*
CH-230-A
a5_p6.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int main() {
    int n;/*nummber of elements in array*/
    printf("enter amount of numbers for array\n");
    scanf("%d", &n);
    float num[n];/*array for numbers with max amount n which is to be entered*/
    printf("enter the numbers\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &num[i]);
    }/* the for loop to enter the numbers*/
    float *ptr = num;/* pointer to be able to count and go through array*/
    int i = 0;
    while (*ptr >= 0){
        i++;
        ptr++;
    }/*while loop to be able to count non negative numbers hence >= 0*/
    printf("before first negative value %d elements", i);
    /*printing i which is the counted number before negatie number*/
    return 0;
}
