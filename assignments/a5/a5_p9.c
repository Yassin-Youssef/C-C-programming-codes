/*
CH-230-A
a5_p9.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
void scanarray(int* array, int rows, int cols, int depth) {/*variables for function and function*/
    printf("enter elements in array\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < depth; k++) {
                scanf("%d", &array[i * (cols * depth) + j * depth + k]);
            }
        }
    }/*triple for loop to scan for all dimenions of array using i j k for rows coloumns depth*/
}/*function for scanning arrays*/
void printXOY(int* array, int rows, int cols, int depth) {
    for (int k = 0; k < depth; k++) {
        printf("section %d:\n", k+1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", array[i * (cols * depth) + j * depth + k]);
            }
            printf("\n");
        }
        printf("\n");
    }/*another triple for loop but starting with depth and wrtten in way for XOY to be outputed*/
}/*function for printing the XOY as per problem*/
int main() {
    int rows, cols, depth;
    printf("enter dimesnions of array\n");
    scanf("%d %d %d", &rows, &cols, &depth);
    int* array = (int*)malloc(rows * cols * depth * sizeof(int));/*the memory allocation*/
    scanarray(array, rows, cols, depth);
    printXOY(array, rows, cols, depth);
    /*functions to be excuted*/
    free(array);
    return 0;
}

