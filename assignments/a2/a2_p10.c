/*
CH-230-A
a2_p10.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    int n;
    printf("enter a postive non zero number:");
    scanf("%d", &n);
    while(n<1){
        printf("reenter value");
        scanf("%d", &n);
    }
    int x = 1;
    while(x<=n){
        int hour;
        hour = x*24;
        printf("\n%d days = %d hours", x, hour);
        x++;
    }
}