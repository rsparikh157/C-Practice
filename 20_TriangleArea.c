#include <stdio.h>

float main() {
    float height, length, area;
    // Input height of the Rectangle
    printf("Enter the height of the Triangle: ");
    scanf("%f", &height);

 // Input length of the Rectangle
    printf("Enter the length of the Triangle: ");
    scanf("%f", &length);
    // Calculate area
    area = (height * length) / 2.0;

    // Output results
    printf("Area of the Triangle = %.2f\n", area);

    return 0;
}
