#include <stdio.h>

int main() {
    float angle1, angle2;

    // Input two angles of the triangle separated by comma
    printf("Input two angles of triangle separated by comma: ");
    scanf("%f,%f", &angle1, &angle2);

    

    
    printf("Third angle of the triangle: %.0f\n", 180 - (angle1 + angle2));

    return 0;
}
