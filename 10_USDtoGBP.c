#include <stdio.h>
int main() {
    int usd, inr, gbp;
    int inrusd = 48;
    int inrgbp = 70;
    // Ask the user for USD
    printf("Enter USD: ");
    scanf("%d", &usd);

    inr = usd * inrusd;
    printf("INR is :%d\n", inr );
    // Calculate the USD
    gbp = inr / inrgbp;

    // Display the result
    printf("GBP for USD %d is: %d\n", usd, gbp);

    return 0;
}
