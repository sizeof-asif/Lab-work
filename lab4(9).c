#include <stdio.h>

int main() {
    int num, i;
    int prime = 1; 


    printf("Input any number: ");
    scanf("%d", &num);


    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; 
            break;
        }
    }

    
    if (isPrime == 1 && num > 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
