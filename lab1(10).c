#include <stdio.h>
#define PI 3.14159

int main() {
    float radius ;

   
    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the volume of the sphere
      

    
    printf("The volume of sphere is %.6f.\n", (4.0 / 3.0) * PI * radius * radius * radius);

    return 0;
}
