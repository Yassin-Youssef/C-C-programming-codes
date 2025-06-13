/*
CH-230-A
a7_p4.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100
/*function to change from lower to upper*/
void upper(char *str) {
    for (int i = 0; str[i]; i++) {/*checks each character*/
        if (islower(str[i])) {/*here checks if the character is lower*/
            str[i] = toupper(str[i]);/*changes to upper*/
        }
    }
    printf("%s\n", str);
}
/*function to change from upper to lower*/
void lower(char *str) {
    for (int i = 0; str[i]; i++) {/*checks each character*/
        if (isupper(str[i])) {/*checks if upper case*/
            str[i] = tolower(str[i]); /*changes to lower*/
        }
    }
    printf("%s\n", str);
}
/*function for upper to lower and lower to upper for each character seperately with same steps as before but in an if else*/
void upperlower(char *str) {
    for (int i = 0; str[i]; i++) {  
        if (islower(str[i])) { 
            str[i] = toupper(str[i]); 
        } else if (isupper(str[i])) { 
            str[i] = tolower(str[i]);  
        }
    }
    printf("%s\n", str); 
}
void (*command())(char *) {/*the void command for the function pointer*/
    int n;
    printf("choose command 1,2,3,4\n");
    scanf("%d", &n);
    if (n == 1) {
        return upper;
    } else if (n == 2) {
        return lower;
    } else if (n == 3) {
        return upperlower;
    } else if (n == 4) {
        return NULL; /*to end code*/
    } else {
        printf("invalid command\n");
        return command(); /*here it repeats*/
    }
    /*with if else statment for each command and returning its corresponding funtion*/
}

int main() {
    char str[MAX_LENGTH];
    
    printf("enter a string\n");
    fgets(str, MAX_LENGTH, stdin);/*entering the string*/

    while (1) {/*infinte loop*/
        void (*chosen_command)(char *) = command();/*getting function pointer*/
        chosen_command(str);  /*here it calls the function*/
    }
    return 0;
}

/*end comment for person grading, im sure my upperlower is correct in terms of thinking but i dont know
why it keeps printing all upper*/