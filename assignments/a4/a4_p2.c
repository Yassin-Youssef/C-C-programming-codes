/*
CH-230-A
a4_p2.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>

int main() {
    char c[51];
    printf("Enter a string with max 50 characters\n");
    fgets(c, sizeof(c), stdin);
    for (int i = 0; c[i] != '\0'; i++){
        printf("\n%c\n", c[i]);
        i= i+1;
        printf("\t%c", c[i]);
    }
    return 0;
}
