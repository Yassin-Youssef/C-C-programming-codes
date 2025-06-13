/*
CH-230-A
stack.h a8_P4
yassin youssef
yyoussef@constructor.university
*/
#ifndef STACK_H
#define STACK_H

#define MAX_AMOUNT 12

/*stack structure*/
struct stack {
    int count;
    int arr[MAX_AMOUNT];
};

/*all functions*/
void push(struct stack* s, int value);
int pop(struct stack* s);
void empty(struct stack* s);
int isEmpty(struct stack* s);
int isFull(struct stack* s);

#endif
