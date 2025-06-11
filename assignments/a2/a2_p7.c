/*
CH-230-A
a2_p7.c
yassin youssef
yyoussef@constructo.university
*/
#include <stdio.h>

int main(){
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
    //*the issue was that the {} were not placed in the while loop therefore the code did not break and was continuos*//
    
}