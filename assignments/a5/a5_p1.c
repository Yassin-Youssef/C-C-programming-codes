/*
CH-230-A
a5_p1.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int main() {
    int n;
    char ch;
    printf("enter number\n");
    scanf("%d", &n);
    printf("enter character\n");
    scanf(" %c", &ch);  
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
