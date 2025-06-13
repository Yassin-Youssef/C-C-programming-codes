/*
CH-230-A
a8_p5.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *chars, *codesum;/*file*/
    char c1, c2;
    int sum;
    chars = fopen("chars.txt", "r");/*opening and reading the file chars.txt*/
    if (chars == NULL) {/*making sure the document isnt empty*/
        printf("error opening text document\n");
        return 1;
    }
    c1 = fgetc(chars);/*getting the character out of chars.txt*/
    c2 = fgetc(chars);/*getting second character out of chars.txt*/
    sum = (int)c1 + (int)c2;/*calculating the sum of the ascii codes*/
    codesum = fopen("codesum.txt", "w");/*opening the codesum documents and will have something written*/
    if (codesum == NULL) {
        printf("erorr opening text document\n");
        fclose(chars);
        return 1;/*checking code isnt empty*/
    }
    fprintf(codesum, "%d", sum);/*printing the sum in codesum using fprintf*/
    fclose(chars);
    fclose(codesum);
    /*closing files*/
    return 0;
}
