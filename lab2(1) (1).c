#include <stdio.h>

int main() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age >= 18) {
        printf("Congratulations! You are eligible for casting your vote.\n");
    } else {
        printf("Sorry, you are not eligible to cast your vote yet.\n");
    }

    return 0;
}
