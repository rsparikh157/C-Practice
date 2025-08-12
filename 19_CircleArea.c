#include <stdio.h>

float main() {
    float radius , area;
    // Input radius of the Circle
    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);


    // Calculate area and perimeter
    area = 22.0/7.0 * radius * radius;

    // Output results
    printf("Area of the Circle = %.2f\n", area);

    return 0;
}
