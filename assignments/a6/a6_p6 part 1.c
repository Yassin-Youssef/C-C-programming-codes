/*
CH-230-A
a6_p6.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int main() {
    unsigned char c;
    printf("enter character ");
    scanf("%c", &c);/*entering character*/
    printf("the decimal representation is %d\n", c);/*the ascii code of the character*/
    printf("the binary representation is ");
    for (int i = 8; i > 0; i--) {
        printf("%d", (c >> i) & 1);
    }/*counting and printing the binary representation*/
    return 0;
}



