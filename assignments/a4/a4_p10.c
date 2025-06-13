/*
CH-230-A
a4_p10.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a,b);
    *invb = 1 / b;
}
int main() {
    float a, b, prod, div, pwr, invb;
    printf("enter two values\n");
    scanf("%f\n %f", &a, &b);
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("product is %f\n", prod);
    printf("division is %f\n", div);
    printf("power is %f\n", pwr);
    printf("1 / b  is %f\n", invb);
    return 0;
}

