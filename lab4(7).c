#include <stdio.h>

int main() {
    int num_terms, i;

    
    printf("Input number of terms: ");
    scanf("%d", &num_terms);

    
    for (i = 1; i <= num_terms; i++) {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i*i*i);
    }

    return 0;
}
