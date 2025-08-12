#include <stdio.h>
float main() {
    float usd, inr;
    float conversion = 48.0;
    // Input for INR
    printf("Enter INR: ");

    scanf("%f", &inr);

    // Calculate the INR
    usd  = inr / conversion;

    // Display the result
    printf("INR for USD %f is: %f\n", inr, usd);

    return 0;
}
