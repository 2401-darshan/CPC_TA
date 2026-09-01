/*
 * Lab 8 - Part A (Q5)
 * Problem Statement: Get 10 numbers from user, print count of odd and even numbers (using while loop).
 */

#include <stdio.h>

int main() {
    int i = 1, num, even_count = 0, odd_count = 0;

    printf("Enter 10 integer numbers:\n");
    while (i <= 10) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        i++;
    }

    printf("\n=== Summary ===\n");
    printf("Total Even numbers: %d\n", even_count);
    printf("Total Odd numbers : %d\n", odd_count);

    return 0;
}
