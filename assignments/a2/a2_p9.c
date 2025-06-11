/*
CH-230-A
a2_p9.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <ctype.h>
/*i wasnt able to solv this question as i couldnt find certain parts in the lecture notes*/
/*i found <ctype.h> and the isaplpha and isdigit on the interert not from lecture notes*/
/* therefore i wasnt able to solve using my mind alone and dont quite understand the solving*/
/*all codes are my thinking except the isdigit and isalpha*/
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (isalpha(c)) {
        printf("\n%c is a letter", c);
    }
    else if (isdigit(c)) {
        printf("\n%c is a digit", c);
    }
    else {
        printf("\n%c is some other symbol", c);
    }
    return 0;
}