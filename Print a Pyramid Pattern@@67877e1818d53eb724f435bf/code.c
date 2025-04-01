#include <stdio.h>
int main() {
    int n, i, j, space;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // Loop for rows
        for (space = 1; space <= n - i; space++) { // Print spaces before stars
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // Print stars
            printf("*");
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}