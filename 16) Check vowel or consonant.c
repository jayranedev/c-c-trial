#include<stdio.h>

bool checkVowels(char ch){
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i < sizeof(vowels); i++){
        if (ch == vowels[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(checkVowels(ch)){
        printf("%c is a vowel!", ch);
    }else{
        printf("%c is not vowel", ch);
    }
}