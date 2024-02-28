#include <stdio.h>

int main() {
    int num, factorial = 1, i;


    printf("Enter an integer: ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
