#include <stdio.h>

int main() {
    int i, sum = 0;

    //sum
    printf("The first 10 natural numbers are:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        sum += i;
    }
    
    
    printf("\nThe Sum is: %d\n", sum);

    return 0;
}
