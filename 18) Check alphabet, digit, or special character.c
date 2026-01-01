#include <stdio.h>

void checkCh(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    scanf("%c", &ch);
    checkCh(ch);
    return 0;
}
