#include <stdio.h>

int main() {
    float width, length , area, perimeter;

    // Input length of the Rectangle
    printf("Enter the length of the Rectangle: ");
    scanf("%f", &length);

    // Input width of the Rectangle
    printf("Enter the width of the Rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output results
    printf("Area of the Rectangle = %.2f\n", area);
    printf("Perimeter of the Rectangle = %.2f\n", perimeter);

    return 0;
}
