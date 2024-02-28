#include <stdio.h>

int main() {
    long long num;
    int count = 0;

   
    printf("Input num: ");
    scanf("%lld", &num);

    
    while (num != 0) {
        count++;
        num /= 10;
    }

    
    printf("Number of digits: %d\n", count);

    return 0;
}
