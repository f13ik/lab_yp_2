#include <stdio.h>
#include <math.h>

int dfac(int n){
    if (n > 1)
        return n * dfac(n - 2);
    return 1;
}

double t(double x){
    double summ1, summ2 = 0.; 
    for (int k = 0; k <= 10; k++){
        summ1 += ( pow(x, 2*k + 1) / (double)dfac(2*k));
        summ2 += ( pow(x, 2*k) / (double)dfac(2*k));
    }  
    return summ1 / summ2;
}

double fun(double y){
    return ( (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y,2) - 1)) );
}
 
int main(void)
{
    float k;
    while (k != 404) {
        printf("num: ");
        scanf("%f", &k);
        printf("ans: %f \n", fun(k));
    }

    
    return 0;
}