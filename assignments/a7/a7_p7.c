/*
CH-230-A
a7_p7.c
yassin youssef
yyousef@constructor.university
*/
#include <stdio.h>
#define MAX_AMOUNT 12/*max amount for array*/
/*defining stack*/
struct stack {
    int count;
    int arr[MAX_AMOUNT];/*contains max amount*/
};
/*function to push elements*/
void push(struct stack* s, int value) {
    if (s->count < MAX_AMOUNT) {
        s->arr[s->count] = value;
        s->count++;
    } else {
        printf("stack overflow\n");
    }
}
/*function to pop*/
int pop(struct stack* s) {
    if (s->count > 0) {
        s->count--;
        return s->arr[s->count];
    } else {
        printf("stack underflown\n");
        return -1; /*return if it is invalid cause of overflow*/
    }
}
/*function to empty stack*/
void empty(struct stack* s) {
    while (s->count > 0) {
        int value = pop(s);
        printf("%d\n", value);
    }
}
/*function to check if stack is empty*/
int isEmpty(struct stack* s) {
    return s->count == 0;
}
/*function to check if stack is full*/
int isFull(struct stack* s) {
    return s->count >= MAX_AMOUNT;
}
int main() {
    struct stack s;/*create stack*/
    s.count = 0;/*initializing*/
    char c;
    int n;

    while (1) {
        printf("enter command s,p,e,q\n");
        scanf(" %c", &c);/*reading command*/
        switch (c) {
            case 's':
                scanf("%d", &n); /*reading number to be pushed*/
                push(&s, n);/*pushing number*/
                printf("pushing %d", n);
                break;
            case 'p':
                n = pop(&s);/*popping the value*/
                if (n != -1) {
                    printf("popping %d\n", n);
                }
                break;
            case 'e':
                printf("emptying stack");
                empty(&s);/*emptying the stack*/
                break;
            case 'q':
                printf("quitting the program\n");
                return 0;/*case for quitting program*/
            default:
                printf("invalid command\n");
                break;
        }
    }
    return 0;
}
