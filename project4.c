#include <stdio.h>

int main(){

    const double pi = 3.14159;
    double r;
    printf("enter a number:\n");
    scanf("%lf" , &r);
    double sq = r * r;
    double result = pi * sq;

    printf("given,\n      pi = %f\n      redius = %f\nwe know that,\n              Area = pi * r^2\nnow,\n     r^2=%f * %f = %f\nso,\n   r^2= %f\nNow,\n    Area = %f * %f\n         = %f\n\nSo,The Area of a circle with %f radius is %f",pi, r, r, r, sq, sq,pi,sq,result,r,result);

    return 0;
}
