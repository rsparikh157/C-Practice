#include <stdio.h>
float main() {
    float gram, kg;
    float conversion = 1000;


    printf("Enter KG: ");
    scanf("%f", &kg);

    gram = kg * conversion;

    // Display the result
    printf("Grams for KG %f is: %f\n", kg, gram);

    return 0;
}
