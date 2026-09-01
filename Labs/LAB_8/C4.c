/*
 * Lab 8 - Part C (Q4)
 * Problem Statement: Perform multiplication of two numbers without using '*' operator (using repeated addition).
 */

#include <stdio.h>

int main() {
    int num1, num2, product = 0, count = 0;

    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &num1, &num2);

    int abs_num2 = (num2 < 0) ? -num2 : num2;

    // Repeated addition
    while (count < abs_num2) {
        product += num1;
        count++;
    }

    // Handle negative multiplier
    if (num2 < 0) {
        product = -product;
    }

    printf("Product of %d and %d (without * operator) = %d\n", num1, num2, product);

    return 0;
}
