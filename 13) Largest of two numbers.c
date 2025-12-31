#include<stdio.h>

int main(){
    float n, m;
    printf("Enter first number: ");
    scanf("%f", &n);
    printf("Enter second number: ");
    scanf("%f", &m);

    if(n > m){
        printf("%.2f is greater than %.2f", n, m);
    }else
        printf("%.2f is greater than %.2f", m, n);
}