/*
CH-230-A
a5_p7.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 101/*for max lenght of 100*/

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    printf("enter first string ");/*entering str1*/
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';/*removing the enter after the string entered*/
    printf("enter second string ");
    fgets(str2, sizeof(str2), stdin);/*entering the str2*/
    str2[strcspn(str2, "\n")] = '\0';/*removing the enter after the string entered*/
    int length;
    length = strlen(str1) + strlen(str2);/*length of the conc for allocation*/
    char *conc = (char *)malloc(length * sizeof(char));/*the allocation of memory*/
    strcpy(conc, str1);/*copy the first string*/
    strcat(conc, str2);/*the concatenation with str1 and str2 */
    printf("Result of concatenation: %s\n", conc);/*the printing of concatenation*/
    return 0;
    free(conc);
}
