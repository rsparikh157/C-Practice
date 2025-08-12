#include <stdio.h>
float main() {
    float intBytes, intKB, intMB, intGB;

    float conversion = 1024;


    printf("Enter Bytes: ");
    scanf("%f", &intBytes);

    intKB = intBytes / conversion;
    printf("KB of Bytes %f is: %f\n", intBytes, intKB);

    intMB = intKB / conversion;
    printf("MB of Bytes %f is: %f\n", intBytes, intMB);

     intGB = intMB / conversion;
    printf("GB of Bytes %f is: %f\n", intBytes, intGB);

    return 0;
}
