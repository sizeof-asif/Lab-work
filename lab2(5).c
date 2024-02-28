#include <stdio.h>

int main() {
    int maths, physics, chemistry, total1, total2;

    
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    
    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total1);


    printf("Total marks of Maths and Physics: ");
    scanf("%d", &total2);

    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total1 >= 190) || (maths + physics >= 140 && maths >= 65 && physics >= 55)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
