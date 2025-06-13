/*
CH-230-A
a6_p7.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
unsigned char set3bits(unsigned char ch, int b1, int b2, int b3){
    ch |=(1 << b1);
    ch |=(1 << b2);
    ch |=(1 << b3);
    return ch;
}
int main() {
    unsigned char c;
    int b1, b2, b3;
    printf("enter character\n");
    scanf(" %c", &c);/*reading the char entered*/
    printf("enter 3 postions\n");
    scanf("%d %d %d", &b1, &b2, &b3);
    printf("the decimal representation %d\n", c);/*the decimal reprisentations being printed*/
    printf("the binary representation is ");
    for (int i = 8; i > 0; i--) {
        printf("%d", (c >> i) & 1);
    }/*printing  first binary*/
    unsigned char final = set3bits(c, b1, b2, b3);/*calling function*/
    printf("\nafter setting bits ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (final >> i) & 1);
    }/*printing of the new binary*/
    return 0;
}