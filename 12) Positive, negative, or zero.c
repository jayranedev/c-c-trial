#include<stdio.h>

int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    if(n > 0){
        printf("%.2f is positive!", n);
    }
    else if(n < 0){
        printf("%.2f is negetive!", n);
    }
    else{
        printf("%.2f is zero!", n);
    }
}