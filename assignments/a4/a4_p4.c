/*
CH-230-A
a4_p4.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int count_consonants(char str[]) {
    int n = 0;
    for (int i = 0; str[i] != '\n'; i++) {
        char c = (str[i]);
        if((c >= 'a' && c<= 'z') && !(c =='a' || c == 'e' || c =='i'|| c == 'o' || c == 'u')){
            n++;
        }
    }
    return n;
}
int main() {
    char str[100];

    while (1) {
        printf("enter string or leave empty to end function\n");
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n') {
            break;  
        }
        int consonant_count = count_consonants(str);
        printf("number of consonants %d\n", consonant_count);
    }
    return 0;
}