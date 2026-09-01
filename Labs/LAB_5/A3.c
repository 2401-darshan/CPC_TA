/*
 * Lab 5 - Part A (Q3)
 * Problem Statement: Check whether given number is positive or negative.
 */

#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("%.2f is a Positive number.\n", num);
    } else if (num < 0) {
        printf("%.2f is a Negative number.\n", num);
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}
