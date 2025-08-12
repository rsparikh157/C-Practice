#include <stdio.h>
int main() {
    int mint, result;
    int minutes = 60;
    // Ask the user for two numbers
    printf("Enter Minutes: ");

    scanf("%d", &mint);

    // Calculate the Minutes
    result = mint / minutes;

    // Display the result
    printf("Hours for minutes %d is: %d\n", mint, result);

    return 0;
}
