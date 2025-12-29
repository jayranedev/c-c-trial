#include<stdio.h>

void celtofer(){
    float temp;
    printf("Enter tempreture in celsius: ");
    scanf("%f", &temp);
    printf("Tempreture in fahrenheit is: %f\n", (temp*1.8)+32);
}

void fertocel(){
    float temp;
    printf("Enter tempreture in fahrenheit: ");
    scanf("%f", &temp);
    printf("Tempreture in celsius is: %f\n", (temp-32)/1.8);
}

int main(){
    void (*fun[])(void) = {celtofer, fertocel};
    int i = 0;

    while (i != 3) {
        printf("\nChoose an option:\n");
        printf("1) Celsius to Fahrenheit\n");
        printf("2) Fahrenheit to Celsius\n");
        printf("3) Exit\n");
        printf("Enter choice (1-3): ");

        if (scanf("%d", &i) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input. Try again.\n");
            i = 0;
            continue;
        }

        if (i == 1) {
            fun[0]();
        } else if (i == 2) {
            fun[1]();
        } else if (i == 3) {
            printf("Goodbye!\n");
        } else {
            printf("Invalid choice. Try again.\n");
            i = 0;
        }
    }
    return 0;
}