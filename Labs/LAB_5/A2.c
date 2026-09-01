/*
 * Lab 5 - Part A (Q2)
 * Problem Statement: Swap two numbers:
 * i) Using temporary variable
 * ii) Without using temporary variable
 */

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    // Method 1: Using temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using temp): a = %d, b = %d\n", a, b);

    // Method 2: Without using temporary variable (swapping back)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping back (without temp): a = %d, b = %d\n", a, b);

    return 0;
}
