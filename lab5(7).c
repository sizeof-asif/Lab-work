#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i += 2) {
        for (space = 1; space <= (n - i) / 2; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = n - 2; i >= 1; i -= 2) {
        for (space = 1; space <= (n - i) / 2; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
