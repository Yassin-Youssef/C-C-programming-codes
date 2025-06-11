/*
CH-230-A
a3_p4.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int position(char str[], char c) {
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != '\0'; ++idx) {
        if (str[idx] == c) {
            return idx;
        }
    } /* the if statement is done to identify the g in the string written*/
    /* it is == c as c is the char for g */
    return -1; /* in case g is never found in the code*/
}
/* after watching help session recording i tried using str[idx]== '\0' but wasnt working and error occurs even after adding the reutn -1 so i tried c and it worked*/

int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}
