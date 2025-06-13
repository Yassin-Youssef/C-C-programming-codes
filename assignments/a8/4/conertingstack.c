/*
CH-230-A
convertingstack.c a8_P4
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include "stack.h"

void decimaltobinary(unsigned int num, struct stack* s) {
    while (num > 0) {
        int remainder = num % 2;
        push(s, remainder);
        num /= 2;
    }
}/*function for decimal to binary*/

int main() {
    struct stack s;/*intianilize stack*/
    s.count = 0;

    unsigned int number;
    printf("enter positive decimal\n");
    scanf("%u", &number);
    decimaltobinary(number, &s);
    printf("the binary representation ");
    empty(&s);/*print and empty the  stack*/
    return 0;
}

