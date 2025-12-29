#include<stdio.h>

int add(int a, int b){
    return a+b; // we use directly return because this will not use a stack slot and cause less memory usage
}

int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d",&a, &b);
    printf("A + B = %d",add(a,b));
    return 0;
}