/*
CH-230-A
a8_p8
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
int spaces(char c) {/*function for checking anything that may seperate the words*/
    return c == ' ' || c == ',' || c == '?' || c == '!' || c == '.' || 
           c == '\t' || c == '\r' || c == '\n';
}
int main() {
    char name[100];
    FILE *file;
    int count = 0;
    char c, prevchar = ' ';
    printf("enter name of file ");
    scanf("%s", name);/*entering filename*/
    file = fopen(name, "r");/*opening file*/
    if (file == NULL) {/*making sure that file isnt empty*/
        printf("error while opening\n");
        return 1;
    }
    while ((c = fgetc(file)) != EOF) {
        if (!spaces(c) && spaces(prevchar)) {/*checking the spaces to find the words and count them*/
            count++;
        }
        prevchar = c;
    }
    fclose(file);/*closing files*/
    printf("the file contins %d words\n", count);/*printing number of words*/
    return 0;
}
