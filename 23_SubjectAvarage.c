#include <stdio.h>

float main() {
    float subject1, subject2, subject3, subAverage;

    // Input Subject 1, Subject 2, Subject 3
    printf("Enter Subject 1 (S1): ");
    scanf("%f", &subject1);

   printf("Enter Subject 2 (S2): ");
    scanf("%f", &subject2);

   printf("Enter Subject 3 (S3): ");
    scanf("%f", &subject3);

    // Calculate Average
    subAverage = (subject1 + subject2 + subject3) / 3.0;

    // Output result
    printf("Average of 3 subjects = %.2f\n", subAverage);

    return 0;
}
