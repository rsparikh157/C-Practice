#include <stdio.h>

float main() {
    float grossSalary, netSalary, allowances, deduction;

    // Input Salary amount
    printf("Enter Gross Salary Amount(G): ");
    scanf("%f", &grossSalary);

    allowances = grossSalary * (10.0/100.00);

    deduction = grossSalary * (3.0/100.00);

    // Calculate Net Salary
    netSalary = grossSalary + allowances - deduction;

    // Output result
    printf("Allowances = %.2f\n", allowances);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", netSalary);

    return 0;
}
