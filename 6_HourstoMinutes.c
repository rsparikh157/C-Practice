#include <stdio.h>
int main() {
    int hr, result;
    int minutes = 60;
    // Ask the user for two numbers
    printf("Enter Hours: ");

    scanf("%d", &hr);

    // Calculate the Minutes
    result = hr * minutes;

    // Display the result
    printf("Minutes for hours %d is: %d\n", hr, result);

    return 0;
}
