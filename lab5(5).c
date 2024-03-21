#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Here is the Fibonacci series up to %d terms:\n", n);
    printf("%d %d ", first, second);

    for (i = 2; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Input number of terms to display: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
