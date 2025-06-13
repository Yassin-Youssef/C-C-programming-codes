/*
CH-230-A
a5_p10.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
void numto0(int n) {
    if (n < 1) {
        return; 
    }/*if function to end code if  negative*/
    printf("%d\n", n);/*to print first number*/
    while(n>1){
        n = n-1;
        printf("%d\n", n);
    }/*while loop to calculate n -1 and print it until it reaches 1*/
}

int main() {
    int n;
    printf("enter a positive integer\n");
    scanf("%d", &n);/*entering the number that will be put in function*/
    numto0(n);/* the void function to carry out problem*/
    return 0;
}
