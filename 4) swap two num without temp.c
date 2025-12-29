#include<stdio.h>

void scan(int *a, int *b){
    printf("Enter value for:\n");
    printf("A: ");
    scanf("%d", a);
    printf("B: ");
    scanf("%d", b);   
}

void swap(int *a, int *b){
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a;
}

int main(){
    int a, b;
    scan(&a, &b);
    swap(&a, &b);
    printf("Swapped value of A = %d, and B = %d", a,b);
    return 0;
}