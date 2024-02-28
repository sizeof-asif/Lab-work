#include <stdio.h>

int main() {
    float km_per_hour, miles_per_hour;

    
    printf("Input kilometers per hour: ");
    scanf("%f", &km_per_hour);

    // Convert kilometers per hour to miles per hour
    miles_per_hour = km_per_hour * 0.621371;

    printf("%.6f miles per hour\n", miles_per_hour);

    return 0;
}
