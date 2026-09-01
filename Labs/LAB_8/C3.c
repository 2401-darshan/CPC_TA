/*
 * Lab 8 - Part C (Q3)
 * Problem Statement: Perform division operation and find quotient and remainder without using '/' and '%' operators.
 * Smaller number should divide the bigger number.
 */

#include <stdio.h>

int main() {
    int num1, num2, dividend, divisor, quotient = 0, remainder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Identify bigger and smaller number
    if (num1 >= num2) {
        dividend = num1;
        divisor = num2;
    } else {
        dividend = num2;
        divisor = num1;
    }

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    remainder = dividend;

    // Repeated subtraction to find quotient and remainder
    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }

    printf("\nDividend (Bigger)  : %d\n", dividend);
    printf("Divisor  (Smaller) : %d\n", divisor);
    printf("Quotient           : %d\n", quotient);
    printf("Remainder          : %d\n", remainder);

    return 0;
}
