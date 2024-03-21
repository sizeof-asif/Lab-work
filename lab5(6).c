#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int isStrong(int num) {
    int originalNum, remainder, sum = 0;

    originalNum = num;

    while (originalNum > 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    if (sum == num)
        return 1; // Strong number
    else
        return 0; // Not a strong number
}

int main() {
    int num;

    printf("Input a number to check whether it is a Strong number: ");
    scanf("%d", &num);

    if (isStrong(num))
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);

    return 0;
}
