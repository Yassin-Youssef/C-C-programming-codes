/*
CH-230-A
a6_p4.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int main() {
    int n;
    printf("enter dimension\n");
    scanf("%d", &n);/*entering the dimensions*/
    int arr1[n], arr2[n];/*i=declaring the arrays*/
    printf("enter compents for first vector\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }/*for loop for entering components of first vector*/
    printf("enter components for second vector\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }/*for loop for entering componenets of second vector*/
    int scalarproduct = 0;/*declaring scalar product for the loop in calculation*/
    printf("intermediate results are\n");
    for (int i = 0; i < n; i++) {
        int product = arr1[i] * arr2[i];
        scalarproduct += product;
        printf("%d\n", product);
    }/*calculating the scalar product while printing the intermediate before next calculation*/
    printf("scalar product is %d\n", scalarproduct);/*printing scalar product*/
    return 0;
}
