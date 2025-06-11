/*
CH-230-A
a3_p9.c
yassin youssef
yyoussef@constructor.university
*/

#include <stdio.h>

#define MAX_NUMBERS 20
double sum25(double v[], int n){
    
}
int main(){
   int n;
    
   double v[MAX_NUMBERS];
   printf("the amount of nummbers you wish to enter\n");
   scanf("%d", &n);
   if (n<5) {
        printf("insuffecient amount of elements\n");
        return -111;
    }
   while(n<1 && n>MAX_NUMBERS){
       printf("incorrect inputn enter again\n");
       scanf("%d", &n);
   }
   printf("enter the values\n");
   for(int i = 0; i<n; i++){
       scanf("%lf", &v[i]);
   }
   double sum;
   sum = v[1]+v[4];
   printf("the sum of the second and 5th position are %lf", sum);
   return 0;
}