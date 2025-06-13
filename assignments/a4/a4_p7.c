/*
CH-230-A
a4_p7.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#define MAX_SIZE 30
void printfullmatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int col){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void printunderdiagonal(int matrix[MAX_SIZE][MAX_SIZE], int rows, int col){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n;
    printf("enter the number of rows and columns max of 30\n");
    scanf("%d", &n);
    printf("enter the numbers in the matrix\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("the full matix is\n");
    printfullmatrix(matrix, n, n);
    printf("numbers under main diagonal are \n");
    printunderdiagonal(matrix, n, n);
    return 0;
}
