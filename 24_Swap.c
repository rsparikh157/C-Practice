#include <stdio.h>

int main() {

    int a , b, s;

// Input Value 1
    printf("Enter Value 1 (a): ");
    scanf("%d", &a);

    printf("Enter Value 2 (b): ");
    scanf("%d", &b);

    int s  = a;  
    a = b;     
    b = s;  

    printf("a = %d, b = %d", a, b);
    return 0;
}
