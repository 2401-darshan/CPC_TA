/*
 * Lab 9 - Part A (Q4)
 * Problem Statement: Find factorial of the given number (using while loop).
 */

#include <stdio.h>

int main() {
    int num, i = 1;
    long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of negative numbers does not exist.\n");
        return 0;
    }

    while (i <= num) {
        fact *= i;
        i++;
    }

    printf("Factorial of %d = %lld\n", num, fact);

    return 0;
}
