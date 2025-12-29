#include<stdio.h>

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void scan(int *a, int *b){
    printf("Enter value for A, B: ");
    scanf("%d %d", a, b);
}

int main(){
    int a, b;
    scan(&a, &b);
    swap(&a, &b);
    printf("Swaped a,b is: A = %d, B = %d", a, b);
    return 0;
}
