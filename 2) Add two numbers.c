#include<stdio.h>

int add(int a, int b){
    return a + b; // avoids extra local variable and enables better compiler optimization
}

int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d",&a, &b);
    printf("A + B = %d",add(a,b));
    return 0;
}