/*
 * Lab 8 - Part B (Q1)
 * Problem Statement: Print number and its square root for 0 to 9.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;

    while (i <= 10) {
        printf("%d = %.2f\n", i, sqrt(i));
        i++;
    }

    return 0;
}
