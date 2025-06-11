/*
CH-230-A
a3_p7.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int j;
void print_form(int n, int m, char c){
    for(int i = 0; i<n; i++){
        for(int j = 0; j< m+i; j++){
            printf("%c", c);
        }
        j = 0;/* the help session recording helped me understand this part*/
        /*as it had explanation of that without it itll become infinte which i found when i didnt add it at first*/
        printf("\n");
    }
}
int main(){
    int n, m;
    char c;
    printf("enter value n\n");
    scanf("%d", &n);
    printf("enter value m\n");
    scanf("%d", &m);
    printf("enter string to be repeated to trapzoid\n");
    scanf(" %c", &c);/*found that the space before %c is crucial for running code*/
    print_form(n,m,c);
    return 0;
}