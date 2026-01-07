#include<stdio.h>
#include<math.h>

void calRoot(double *x1, double *x2){
    double a, b, c;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    *x1 = ((-1*b)+sqrt(((b*b)-(4*a*c))))/(2*a);
    *x2 = ((-1*b)-sqrt(((b*b)-(4*a*c))))/(2*a);
}

int main(){
    double x1, x2;
    calRoot(&x1, &x2);
    printf("x1: %.6lf and x2: %.6lf", x1, x2);
}