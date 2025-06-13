/*
CH-230-A
a8_p7.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *text1, *text2, *merge12;/*memory of the files*/
    text1 = fopen("text1.txt", "r");/*opening text document and r is for reading the while*/
    text2 = fopen("text2.txt", "r");/*same here opening text document 2 and reading*/
    merge12 = fopen("merge12.txt", "w");/*opening text file merge12 but w is for writing as text1 and text2 will be written in that*/
    if(text1 == NULL || text2 == NULL){/*making sure that the file isnt empty*/
        printf("error occured while opening file\n");
        return 1;
    }
    char c;
    while((c = fgetc(text1)) != EOF){
        fputc(c, merge12);/*putting the characters in merg12 until eof which means empty*/
    }
    while((c = fgetc(text2)) != EOF){
        fputc(c, merge12);/*putting the characters in merg12 until eof which means empty*/
    }
    fclose(merge12);
    fclose(text1);
    fclose(text2);
    /*closing the files*/
    return 0;
}