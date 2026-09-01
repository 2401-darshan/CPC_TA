/*
 * Lab 8 - Part A (Q4)
 * Problem Statement: Print sum of 1 to n numbers (using while loop).
 */

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
