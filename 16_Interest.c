#include <stdio.h>

float main() {
    float P, R, N, I;

    // Input principal amount, rate of interest, and time period
    printf("Enter Principal Amount (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &R);

    printf("Enter Time Period in years (N): ");
    scanf("%f", &N);

    // Calculate interest
    I = (P * R * N) / 100;

    // Output result
    printf("Simple Interest (I) = %.2f\n", I);

    return 0;
}
