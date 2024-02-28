#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    printf("Input any two numbers separated by comma: ");
    scanf("%f,%f", &num1, &num2);

    
    /*sum = ;
    difference = ;
    product = ;
    quotient = ;
*/
    
    printf("The sum of the given numbers: %.6f\n", num1 + num2);
    printf("The difference of the given numbers: %.6f\n", num1 - num2);
    printf("The product of the given numbers: %.6f\n", num1 * num2);
    printf("The quotient of the given numbers: %.6f\n", num1 / num2);

    return 0;
}
