#include <stdio.h>

int main() {

    int a , b, swap;

// Input Value 1
    printf("Enter Value 1 (a): ");
    scanf("%d", &a);

    printf("Enter Value 2 (b): ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap = a;  // store a in temp
    a = b;     // assign b to a
    b = swap;  // assign temp to b

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
