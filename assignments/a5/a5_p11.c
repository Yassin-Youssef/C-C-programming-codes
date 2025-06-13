/*
CH-230-A
a5_p11.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int prime(int num) {
    if (num < 2) {
        return 0;
    }/*making sure all numbers less than 2 is not prime*/
    for (int divisor = 2; divisor <= num / 2; divisor++) {/*testing if prime by the divisor*/
        if (num % divisor == 0) {
            return 0; /*meaning its not prime*/
        }
    }
    return 1; /*meaning it is prime*/
}
int main() {
    int x;
    printf("enter positive integer\n");/*enetering the integer*/
    scanf("%d", &x);
    if (prime(x)) {/*checking prime from function*/
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime", x);
    }/*printing final results*/
    return 0;
}

