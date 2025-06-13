/*
CH-230-A
a4_p9.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return min * max; 
}
int main(){
    int n;
    printf("enter number of values to be entered");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
      printf("Enter the values\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = prodminmax(arr, n);
    printf("The product of the minmum and maximum value is %d", result);
    free(arr);
    return 0;
}
