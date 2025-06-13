/*
CH-230-A
a5_p5.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
double scalarproduct(double *v, double *w, int n) {
    double product = 0.0;
    for (int i = 0; i < n; i++) {/*for loop for each i value for product*/
        product += v[i] * w[i];
    }
    return product;
}/*function following the scalar product equation*/
void minmax(double *vector, int n, double *min, double *max, int *minpos, int *maxpos) {
    /*the minmax function with the variables used*/
    *min = *max = vector[0];/*start fro min and max*/
    *minpos = *maxpos= 0;/*start for the positions*/
    for (int i = 1; i < n; i++) {
        if (vector[i] < *min) {
            *min = vector[i];
            *minpos = i;
        } /*if function for min with vector[i] being value comapred*/
        else if (vector[i] > *max) {
            *max = vector[i];
            *maxpos = i;
        }/*else if function for the max using also the vector[i]*/
    }
}
int main(){
    int n;
    printf("enter number of values in vector\n");
    scanf("%d", &n);/*scanning for the number of elements in the vector*/
    double v[n], w[n];
    printf("enter components for vector v\n");
    for(int i = 0; i<n; i++){
        scanf("%lf", &v[i]);
    }/*scanning for vector v*/
    printf("enter components for vector w\n");
    for(int i = 0; i<n; i++){
        scanf("%lf", &w[i]);
    }/*scannign for vector w*/
    double product = scalarproduct(v, w, n);/*the product function so it runs*/
    printf("scalar product = %lf\n", product);/*printing of the scalar product*/
    double vmin, vmax;
    int vminpos, vmaxpos;/*declaring the variables for v*/
    minmax(v, n, &vmin, &vmax, &vminpos, &vmaxpos);/*min max fucntion for v only*/
    printf("the smallest= %lf\nPosition of smallest = %d\n", vmin, vminpos);
    printf("the largest %lf\npostion of largest = %d\n", vmax, vmaxpos);
    /*printing of the min max and psotions for v*/
    double wmin, wmax;
    int wminpos, wmaxpos;/*declaring the variables for w*/
    minmax(w, n, &wmin, &wmax, &wminpos, &wmaxpos);/*min max function for w only*/
    printf("the smallest = %lf\npostion of smallest = %d\n", wmin, wminpos);
    printf("the largest = %lf\npostion of largest = %d\n", wmax, wmaxpos);
    /*pritning of min max for w*/
    return 0;
}


