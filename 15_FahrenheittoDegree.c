#include <stdio.h>
float main() {
    float intF;
    float intC;

    printf("Enter Fahrenheit: ");
    scanf("%f", &intF);

    intC = ((5.0/9.0) * (intF - 32.0));
    printf("Degree for Fahrenheit %f is: %f\n", intF, intC);

    return 0;
}
