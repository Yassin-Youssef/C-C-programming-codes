/*
CH-230-A
a4_p12.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
void replaceAll(char *str, char c, char e) {
    while (*str) {
        if (*str == c) {
            *str = e;
        }
        str++;
    }
}
int main() {
    char str[81];
    char c, e;
    while (1) {
        printf("Enter a string up to 80 characters or enter stop to terminarefull function\n");
        fgets(str, sizeof(str), stdin);
        if()
        printf("character to replace\n");
        scanf(" %c", &c);
        printf("replacing character\n");
        scanf(" %c", &e);
        printf("Before replacement: %s\n", str);
        replaceAll(str, c, e);
        printf("After replacement: %s\n", str);
    }
    return 0;
}