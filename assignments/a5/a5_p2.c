/*
CH-230-A
a5_p2.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] /= 5;
    }/*the functions to divide the elements entered by 5*/
}
int main() {
    int size;
    printf("enter size of the array\n");
    scanf("%d", &size);/*the size for elements in array*/
    float arr[size];/*size is the number of lements to be entered so max amount in array and it is declared here to be able to have size entered*/
    printf("enter elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);/*for loop to scan all eements entered by keyboard*/
    }
    printf("before\n");
    for (int i = 0; i < size; i++) {
        printf("%f ", arr[i]);/*for loop to print before elemnts*/
    }
    printf("\n");/* to guve space between before and after*/
    divby5(arr, size);/*to have the void function in the main function*/
    printf("after\n");
    for (int i = 0; i < size; i++) {
        printf("%f ", arr[i]);/*printing the after elements*/
    }
    return 0;
}
