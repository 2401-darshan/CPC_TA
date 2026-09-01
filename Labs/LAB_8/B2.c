/*
 * Lab 8 - Part B (Q2)
 * Problem Statement: Print all integers greater than 100 and less than 200 that are divisible by 7 but not divisible by 5.
 */

#include <stdio.h>

int main() {
    int i = 101;

    printf("Integers between 100 and 200 divisible by 7 but NOT by 5:\n");

    while (i < 200) {
        if (i % 7 == 0 && i % 5 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}
