#include <stdio.h>

int main() {
    int hours, minutes, total_minutes;

    
    printf("Input hours: ");
    scanf("%d", &hours);

    
    printf("Input minutes: ");
    scanf("%d", &minutes);

    // Calculate total minutes
    
    
    printf("Total: %d minutes.\n", hours * 60 + minutes);

    return 0;
}
