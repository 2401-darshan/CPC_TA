/*
 * Lab 8 - Part A (Q2)
 * Problem Statement: Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.
 */

#include <stdio.h>

int main() {
    int n, i;

    printf("=== Odd numbers 1 to 10 using while loop ===\n");
    i = 1;
    while (i <= 10) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n\n");

    printf("Enter n to print odd numbers between 1 to n: ");
    scanf("%d", &n);

    printf("=== Using while loop ===\n");
    i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    printf("=== Using do-while loop ===\n");
    i = 1;
    if (n >= 1) {
        do {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
            i++;
        } while (i <= n);
    }
    printf("\n");

    return 0;
}
