/*
CH-230-A
a3_p2.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>

int main() {
   char ch;
   int n;
   printf("enter a lowercase character");
   scanf("%c", &ch);
   printf("\nenter a number");
   scanf("%d", &n);
   int x;
   x = 1;
   while(x <= n ){
       printf("\n%c", ch);
       ch= ch - 1;
       x++;
   }
    return 0;
}