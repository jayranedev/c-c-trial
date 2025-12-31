#include<stdio.h>

int main(){
    float m, n, o;
    printf("Enter first number: ");
    scanf("%f", &m);
    printf("Enter second number: ");
    scanf("%f", &n);
    printf("Enter third number: ");
    scanf("%f", &o);
    
    if(m > n && m > o){
        printf("%.2f is greater than %.2f and %.2f", m, n, o);
    }else if(n> m && n > o){
        printf("%.2f is greater than %.2f and %.2f", n, m, o);
    }
    else{
        printf("%.2f is greater than %.2f and %.2f", o, n, m);
    }
}