/*
CH-230-A
a7_p5.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

/*function for ascending*/
void ascending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
/*function for descending*/
void descending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*function to choose sort*/
void (*command(char choice))(int *, int) {
    if (choice == 'a') {
        return ascending; /*returning ascending*/
    } else if (choice == 'd') {
        return descending; /*returning the descending*/
    } else if(choice == 'e') {
        return NULL; /*returning null for exit*/
    }
}
int main() {
    int n;
    printf("enter the amount of numbers want to be entered\n");
    scanf("%d", &n);/*entering amount of numbers wanted*/
    int *arr = malloc(n * sizeof(int));/*the allocation of memory*/
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; /*incase of failing memory allocation*/
    }
    printf("enter the integers\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); /*reading the number entered*/
    }

    char choice;
    while (1) { /*infinite loop*/
        printf("enter a,d,e\n");
        scanf(" %c", &choice); 
        void (*sort_func)(int *, int) =command(choice);
        sort_func(arr, n);/*calling of function*/ 
        for (int i = 0; i < n; i++) {/*for loop to be able to print the order*/
            printf("%d ", arr[i]);
            }
            printf("\n");
        }
    free(arr);
    return 0;
}

