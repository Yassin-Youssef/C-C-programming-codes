/*
CH-230-A
a3_p8.c
yassin youssef
yyoussef@constructor.university
*/

#include <stdio.h>

#define MAX_NUMBERS 10

float Fsum(float num[], int count){
    float sum = 0;
    for(int j = 0, j<count, j++){
        sum+ = num[i];
    }
    return sum;
}

int main() {
    float num[MAX_NUMBERS];
    int count = 0;
    float n;
    printf("enter 10 float numbers and if you want to finish before 10 enter the number -99");
    while(count <MAX_NUMBERS){
        scanf("%f", &n);
        if(n==-99.0){
            printf("end of of sequenced numbers");
            
        }
        num[count++];
    }
    float sum = Fsum(num, count);
    float avg;
    avg = sum /count;
    printf("the sum is %f", sum);
    printf("the average is %f", avg);
    return 0;
}
/* i used some searching from the internet to help show why code wrong and it had diff characters like count instead o i which i used*/
/* and it did make a differnece i dont know why*/
/* also there are erros that keep coming when trying to run the code idk why it happens*/