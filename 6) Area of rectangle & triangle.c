#include<stdio.h>

void aofr(){
    float len, b;
    printf("Enter length of rec: ");
    scanf("%f", &len);
    printf("Enter breadth of rec: ");
    scanf("%f", &b);
    printf("Area of rectangle is: %.2f", len * b);
}

void aoft(){
    float base, height;
    printf("Enter base of tri: ");
    scanf("%f", &base);
    printf("Enter height of tri: ");
    scanf("%f", &height);
    printf("Area of triangle is: %.2f", .5*base*height);
}

int main(){
    void (*fun[]) () = {aofr, aoft};
    int option = 0;
    while(true){
        printf("\n\nChoose form the following:\n1. Enter 1 for Area of triangle\n2. Enter 2 for area of Rectangle\n3. Enter 3 to exit.\n> Your Option: ");
            scanf("%d", &option);
        switch(option){
            case 1:
            {
                fun[1]();
                break;
            }
            case 2:
            {
                fun[0]();
                break;
            }
            case 3:
            {
                printf("Exiting program...\n");
                return 0;
            }
            default:
            printf("Invalid option! Try again.\n");
        }
    }
}