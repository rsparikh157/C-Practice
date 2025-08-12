#include <stdio.h>
float main() {
    float usd, inr;
    float conversion = 48.0;
    // Ask the user for USD
    printf("Enter USD: ");

    scanf("%f", &usd);

    // Calculate the INR
    inr = usd * conversion;

    // Display the result
    printf("INR for USD %f is: %f\n", usd, inr);

    return 0;
}
