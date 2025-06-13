/*
CH-230-A
a5_p5.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
double scalarproduct(double *v, double *w, int n) {
    double product = 0.0;
    for (int i = 0; i < n; i++) {
        product += v[i] * w[i];
    }
    return product;
}
void minmax(double *vector, int n, double *min, double *max, int *minpos, int *maxpos) {
    *min = *max = vector[0];
    *minpos = *maxpos= 0;
    for (int i = 1; i < n; i++) {
        if (vector[i] < *min) {
            *min = vector[i];
            *minpos = i;
        } else if (vector[i] > *max) {
            *max = vector[i];
            *maxpos = i;
        }
    }
}
int main(){
    int n;
    printf("enter number of values in vector\n");
    scanf("%d", &n);
    double v[n], w[n];
    printf("enter components for vector v\n");
    for(int i = 0; i<n; i++){
        scanf("%lf", &v[i]);
    }
    printf("enter components for vector w\n");
    for(int i = 0; i<n; i++){
        scanf("%lf", &w[i]);
    }
    double product = scalarproduct(v, w, n);
    printf("scalar product = %lf\n", product);
    double vmin, vmax;
    int vminpos, vmaxpos;
    minmax(v, n, &vmin, &vmax, &vminpos, &vmaxpos);
    printf("smallest in vector v = %lf\nits postion = %d\n", vmin, vminpos+1);
    printf("largest in vector v= %lf\nits postion = %d\n", vmax, vmaxpos+1);
    double wmin, wmax;
    int wminpos, wmaxpos;
    minmax(v, n, &wmin, &wmax, &wminpos, &wmaxpos);
    printf("smallest in vector w = %lf\nits postion = %d\n", wmin, wminpos+1);
    printf("largest in vector w = %lf\nits postion = %d\n", wmax, wmaxpos+1);
    return 0;
}


