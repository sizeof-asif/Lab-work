#include <stdio.h>

int main() {
    char employeeID[11];
    int hoursWorked;
    float hourlyRate, salary;

    
    printf("Input the Employee's ID (Max. 10 chars): ");
    scanf("%s", employeeID);
    
    printf("Input the working hours: ");
    scanf("%d", &hoursWorked);
    
    printf("Salary amount/hr: ");
    scanf("%f", &hourlyRate);

    // Calculate salary
    salary = hoursWorked * hourlyRate;

    
    printf("Employee's ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
