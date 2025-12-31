#include<stdio.h>

int valChar(char ch){
    return ((int)ch);
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%c -> %d", ch, valChar(ch));
    return 0;
}