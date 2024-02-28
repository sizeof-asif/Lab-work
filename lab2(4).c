#include <stdio.h>

int main() {
    int m, n;

    // Input the value of m
    printf("Enter the value of m: ");
    scanf("%d", &m);

    
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    // Output the value of n
    printf("The value of n = %d\n", n);

    return 0;
}
