/*
 * Lab 9 - Part A (Q3)
 * Problem Statement: Calculate x^y without using power function (pow()).
 */

#include <stdio.h>

int main() {
    int x, y, i = 1;
    long long result = 1;

    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &x, &y);

    if (y < 0) {
        printf("Exponent should be non-negative for integer calculation.\n");
        return 0;
    }

    while (i <= y) {
        result *= x;
        i++;
    }

    printf("%d ^ %d = %lld\n", x, y, result);

    return 0;
}
