#include<stdio.h>
#include<math.h>

void compoundIntrest(){
    float P, r, t, n;
    printf("Enter the initial principal balance: ");
    scanf("%f",&P);
    printf("Enter the annual interest rate: ");
    scanf("%f",&r);
    printf("Enter the  The number of times that interest is compounded per year (e.g., 1 for annually, 12 for monthly, 4 for quarterly): ");
    scanf("%f",&n);
    printf("Enter the time (in years): ");
    scanf("%f",&t);

    printf("The Final ammount is: %.3f\n",P*(pow((1+(r/100)/n),(n*t))));
    printf("The Final intrest ammount is: %.3f",(P*(pow((1+(r/100)/n),(n*t))))-P);
}

int main(){
    compoundIntrest();
    return 0;
}