#include<stdio.h>
int main(){
    while (true){
        printf("Enter a number between 1 to 7: \n");
        printf("Enter 8 to exit: ");
        int n;
        scanf("%d", &n);
        switch(n){
            case 1:{
                printf("Monday!!!\n");
                break;
            }
            case 2:{
                printf("Tuesday!!!\n");
                break;
            }
            case 3:{
                printf("Wednesday!!!\n");
                break;
            }
            case 4:{
                printf("Thursday!!!\n");
                break;
            }
            case 5:{
                printf("Friday!!!\n");
                break;
            }
            case 6:{
                printf("Saturday!!!\n");
                break;
            }
            case 7:{
                printf("Sunday!!!\n");
                break;
            }
            case 8:{
                printf("Exiting!!!\n");
                return 0;
            }
            default:{
                printf("Invalid input, enter correct in range!!!\n");
            }
        }
    }
}