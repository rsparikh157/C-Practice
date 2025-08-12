#include <stdio.h>
float main() {
    float intC;
    float intF;

    printf("Enter Degree in Celcius: ");
    scanf("%f", &intC);

    intF = ((9.0/5.0) * intC) + 32.0;
    printf("Fahrenheit of Degree %f is: %f\n", intC, intF);

    return 0;
}
