#include<stdio.h>

bool checkeo(int n){
    return n%2;
}

int main(){
    int n;
    printf("Enter a number to check even-odd: ");
    scanf("%d",&n);
    if(checkeo(n)){
        printf("%d, is odd!",n);
    }else{
        printf("%d, is even!",n);
    }
    return 0;
}