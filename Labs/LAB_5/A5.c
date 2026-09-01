/*
 * Lab 5 - Part A (Q5)
 * Problem Statement: Find out largest number from given three numbers.
 */

#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("%.2f is the largest number.\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("%.2f is the largest number.\n", n2);
    } else {
        printf("%.2f is the largest number.\n", n3);
    }

    return 0;
}
