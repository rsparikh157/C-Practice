#include <stdio.h>

float main() {
    float grossSales, netSales, discount;

    // Input Gross Sales
    printf("Enter Gross Sales Amount(G): ");
    scanf("%f", &grossSales);

    discount = grossSales * (10.0/100.00);

    // Calculate Net Sales
    netSales = grossSales - discount;

    // Output result
    printf("Discount = %.2f\n", discount);
    printf("Net Sales = %.2f\n", netSales);

    return 0;
}
