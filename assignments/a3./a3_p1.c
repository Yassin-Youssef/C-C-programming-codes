/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float x;
    int n;
    int idx;
    printf("enter value:");
    scanf("%f", &x);
    printf("enter the value of n \n");
    scanf("%d", &n);
    while(n<=0){
        printf("reenter value\n");
        scanf("\n%d", &n);
    }
    idx =0;
    while (idx <= n){
        printf("%f\n", x);
        idx ++;
    }
    return 0;
}
