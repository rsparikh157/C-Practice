#include <stdio.h>
float main() {
    float gram, kg;
    float conversion = 1000;


    printf("Enter Grams: ");
    scanf("%f", &gram);

    kg= gram / conversion;

    // Display the result
    printf("KG for Grams %f is: %f\n", gram, kg);

    return 0;
}
