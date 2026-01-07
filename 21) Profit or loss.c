#include<stdio.h>

int main(){
    float totalR, totalE;
    printf("Enter the Total Revenue: ");
    scanf("%f", &totalR);
    printf("Enter the Total Expenses: ");
    scanf("%f", &totalE);
    if(totalR-totalE > 0){
        printf("The company is profitable by: %.2f", totalR-totalE);
    }else{
        printf("The company is in loss by: %.2f", totalR-totalE);
    }
    return 0;
}