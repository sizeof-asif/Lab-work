#include <stdio.h>

int main() {
    int number1, number2;

    
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &number1, &number2);

        if (number1 == number2) {
        printf("Number1 and Number2 are equal\n");
    } else {
        printf("Number1 and Number2 are not equal\n");
    }

    return 0;
}
