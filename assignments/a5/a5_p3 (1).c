/*
CH-230-A
a5_p3.c
yassin youssef
yyoussed@constructor.university
*/
#include <stdio.h>

int count_lower(char* str) {
    int i = 0;
    while (*str) {  
        if (*str >= 'a' && *str <= 'z') {/* checking for lower case in string*/
            i++;/*counting of the lower case using this int whch will be outputed in end*/
        }
        str++;/*count string letters*/
    }
    return i;
}

int main() {
    char str[51];/* for the 50 character limit*/
    while (1) {
        printf("enter a string or click enter to end function\n");
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n') {/*to end function when user wants*/
            break;
        }
        printf("number of lowercase characters is %d\n", count_lower(str));/* produce the number of lower case letter*/
    }
    return 0;
}
