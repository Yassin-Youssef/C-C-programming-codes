/*
CH-230-A
a4_p3.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#define MAX_AMOUNT 15
float geometric_mean(float n[], int num){
    
}
float geometric_high(float n[], int num){
    float high = arr[0];
    for (int i = 0; i < num; i++) {
        if (n[i] > high) {
            high = n[i];
        }
    }
    return high;
}
float geometric_small(float n[], int num){
    float small = n[0];
    for (int i = 0; i < num; i++) {
        if (n[i] < small) {
            small = n[i];
        }
    }
    return small;
}
float geometric_sum(float n[], int num){
    float sum = 0.0;
    for (int i = 0; i < num; i++) {
        sum += n[i];
    }
    return sum;
}
int main(){
    float n[MAX_AMOUNT];
    float value;
    int i = 0;
    printf("enter 15 values\n");
    while( i<MAX_AMOUNT){
        scanf("%f\n", &value);
        n[i++] = value;
        if(value < 0){
            break;
        }
    }
   char c;
   printf(" choose m,h,1,s");
   scanf("%c", c);
   switch(c){
       case'm':{
           printf("the mean of the values is %f\n", geometric_mean[n, i]);
           break;
       }
       case'h':{
           printf("highest value is %f\n", geometric_high[n, i]);
           break;
       }
       case'1':{
           printf("the smallest value is %f\n", geometric_small);
           break;
       }
       case 's':{
           printf("the sum of the values is %f\n", geometric_sum[n, i];
           break;)
       }
   }
}