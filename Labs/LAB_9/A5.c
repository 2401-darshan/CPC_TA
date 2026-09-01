/*
 * Lab 9 - Part A (Q5)
 * Problem Statement: Find factors of the given number (using while loop).
 */

#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);
    while (i <= num) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}
