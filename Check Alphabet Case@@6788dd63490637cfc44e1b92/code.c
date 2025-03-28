#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is uppercase.", ch);
    } else {
        printf("The character '%c' is not uppercase.", ch);
    }

    return 0;
}