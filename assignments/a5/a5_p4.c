/*
CH-230-A
a5_p4.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
void divby5(float *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] /=5;
    }/*the functions to divide the elements entered by 5 including pointer for array*/
}
int main() {
    int n;/*number of elements*/
    printf("enter number of elements in the array\n");
    scanf("%d", &n);/*the amount of numbers in array*/
    float *arr = (float *)malloc(n*sizeof(float));/*the allocation of memory form pointers*/
    printf("enter elements\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);/*for loop to scan all eements entered by keyboard*/
    }
    printf("before\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", arr[i]);/*for loop to print before elemnts*/
    }
    printf("\n");/* to guve space between before and after*/
    divby5(arr, n);/*to have the void function in the main function*/
    printf("after\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", arr[i]);/*printing the after elements*/
    }
    free(arr);
    return 0;
}
