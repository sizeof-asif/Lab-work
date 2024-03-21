#include <stdio.h>

void findDivisors(int num) {
    int i, sum = 0;

    printf("The positive divisors of %d are: ", num);
    
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    
    printf("\nThe sum of the divisors is: %d\n", sum);
    
    if (sum == num) {
        printf("So, %d is a perfect number.\n", num);
    } else {
        printf("So, %d is not a perfect number.\n", num);
    }
}

int main() {
    int num;

    printf("Input the number: ");
    scanf("%d", &num);

    findDivisors(num);

    return 0;
}
