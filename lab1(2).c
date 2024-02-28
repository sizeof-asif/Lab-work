#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Compute perimeter and area
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    
    printf("Perimeter of the Circle = %.6f inches\n", perimeter);
    printf("Area of the Circle = %.6f square inches\n", area);

    return 0;
}
