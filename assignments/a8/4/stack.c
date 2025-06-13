/*
CH-230-A
stack.c a8_P4
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include "stack.h"
/* push function to add elements to the stack */
void push(struct stack* s, int value) {
    if (s->count < MAX_AMOUNT) {
        s->arr[s->count] = value;
        s->count++;
    } else {
        printf("stack overflow\n");
    }
}

/* pop function to remove elements from the stack */
int pop(struct stack* s) {
    if (s->count > 0) {
        s->count--;
        return s->arr[s->count];
    } else {
        printf("stack underflow\n");
        return -1;
    }
}

/*function to empty the stack */
void empty(struct stack* s) {
    while (s->count > 0) {
        int value = pop(s);
        printf("%d", value);/*where the printing of binary happens*/
    }
}

/* Function to check if the stack is empty */
int isEmpty(struct stack* s) {
    return s->count == 0;
}

/* Function to check if the stack is full */
int isFull(struct stack* s) {
    return s->count >= MAX_AMOUNT;
}
