#include <stdio.h>

int main() {
    int rollNo, physics, chemistry, computerApp;
    char name[50];
    float total, percentage;
    char division[10];

    
    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNo);
    printf("Input the Name of the Student: ");
    scanf("%s", name);
    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computerApp);

    
    total = physics + chemistry + computerApp;

    
    percentage = (total / 300) * 100;

    
    

    
    printf("\nRoll No: %d\n", rollNo);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", computerApp);
    printf("Total Marks = %.0f\n", total);
    printf("Percentage = %.2f\n", percentage);
    
    if (percentage >= 60.0) {
        printf("Division = First");
    } else if (percentage >= 50.0) {
        printf("Division = second");
    } else if (percentage >= 40.0) {
        printf("Division = Third");
    } else {
        printf("Division = Fail");
    }

    return 0;
}
