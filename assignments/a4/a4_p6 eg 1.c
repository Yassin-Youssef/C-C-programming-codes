/*
CH-230-A
a4_p6.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
void findTwoGreatest(int arr[], int n) {
    int great1, great2;
    great1 = 0;
    great2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > great1) {
            great1 = arr[i]; 
        } 
        else{
            great2 = arr[i];
        }
    }
    printf("The largest value is %d and the second largest is %d", great1, great2);
}
int main() {
    int n;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findTwoGreatest(arr, n);
    free(arr);
    return 0;
}
