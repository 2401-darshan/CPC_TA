/*
 * Lab 9 - Part A (Q1)
 * Problem Statement: Print sum of series 1 - 2 + 3 - 4 + 5 - 6 + 7 ... n (using while loop).
 */

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 != 0) {
            sum += i; // Odd terms are added
        } else {
            sum -= i; // Even terms are subtracted
        }
        i++;
    }

    printf("Sum of series 1 - 2 + 3 - 4 + ... %d = %d\n", n, sum);

    return 0;
}
