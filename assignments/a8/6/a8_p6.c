/*
CH-230-A
a8_p6.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    char name1[100], name2[100];
    double num1, num2;
    FILE *f1, *f2, *fout;
    printf("enter first file name\n");
    scanf("%s", name1);
    printf("enter second file name\n");
    /*entering the files*/
    scanf("%s", name2);
    /*opening first file*/
    f1 = fopen(name1, "r");
    if (f1 == NULL) {/*if function for checking if file empty while opening and if error occurs*/
        printf("error opening file 1\n");
        return 1;
    }
    fscanf(f1, "%lf", &num1);/*scanning what is in file 1*/
    fclose(f1);
    /*opening second file*/
    f2 = fopen(name2, "r");
    if (f2 == NULL) {/*if function to check if empty while opening*/
        printf("error opening file 2\n");
        return 1;
    }
    fscanf(f2, "%lf", &num2);/*scanning num in file 2*/
    fclose(f2);
    fout = fopen("results.txt", "w");/*opening file results to write in it*/
    if (fout == NULL) {
        printf("error opening results file");
        return 1;
    }
    /*the calculations*/
    fprintf(fout, "sum= %lf\n", num1 + num2);
    fprintf(fout, "difference= %lf\n", num1 - num2);
    fprintf(fout, "product= %lf\n", num1 * num2);
    fprintf(fout, "division= %lf\n", num1 / num2);
    fclose(fout);/*closing files*/
    return 0;
}
