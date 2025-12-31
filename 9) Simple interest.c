#include<stdio.h>

void simpleInt(){
    float P, r, t;
    printf("Enter the initial principal balance: ");
    scanf("%f",&P);
    printf("Enter the annual interest rate: ");
    scanf("%f",&r);
    printf("Enter the time (in years): ");
    scanf("%f",&t);

    printf("The Final ammount is: %.3f",P*(1+(r/100)*t));
}

int main(){
    simpleInt();
    return 0;
}