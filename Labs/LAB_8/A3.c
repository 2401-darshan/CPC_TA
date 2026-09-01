/*
 * Lab 8 - Part A (Q3)
 * Problem Statement: Print numbers between two given numbers which are divisible by 2 (using while loop).
 */

#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Numbers divisible by 2 between %d and %d:\n", start, end);
    
    while (start <= end) {
        if (start % 2 == 0) {
            printf("%d ", start);
        }
        start++;
    }
    printf("\n");

    return 0;
}
