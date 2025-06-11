/*
CH-230-A
a3_p5.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
int main() {
    char c;
    int n;
    printf("enter s/p/t or any other character");
    scanf("%c", &c);
    printf("enter a value n\n");
    scanf("%d", &n);
    double temp[n];
    double sum_temp = 0.0;
    for(int i=0; i<n; i++){
        printf("enter temprature in celcius\n");
        scanf("%lf", &temp[i]);
    }
    for(int i=0; i<n; i++){
        sum_temp+=temp[i];
    }
    switch(c){
        case 's':{
            printf("the sum of the temperatures is %lf\n", sum_temp);
            break;
        }
        case 'p':{
            for(int i = 0; i<n; i++){
                printf("tempratures are %lf\n", temp[i]);
            }
            break;
        }
        case 't':{
            double ftemp;
            for(int i = 0; i<n; i++){
                ftemp = ((9/5)*temp[i])+32;
                printf("tempratures in farenheit %lf\n", ftemp);
            }
            break;
        }
        default:{
            double mean;
            mean = sum_temp/n;
            printf("the mean of the tempratures are %lf", mean);
            break;
        }
        
    }
    
}
