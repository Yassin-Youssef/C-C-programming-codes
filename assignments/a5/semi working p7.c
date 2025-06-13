#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 101

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    printf("enter first string ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("enter second string ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int length;
    length = strlen(str1) + strlen(str2)+1;
    *str1 = (char)malloc(length*sizeof(char));
    strcat(str1, str2);

    printf("Result of concatenation: %s\n", str1);
    return 0;
    free(str1);
}
