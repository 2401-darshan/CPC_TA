/*
 * Lab 9 - Part C (Q2)
 * Problem Statement: Convert decimal number to binary (using while loop).
 * Example: n = 11 -> Output: 1101
 */

#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int temp = num;

    // Convert decimal to binary by division by 2
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("Binary representation of %d = ", num);
    // Print in reverse order
    i--;
    while (i >= 0) {
        printf("%d", binary[i]);
        i--;
    }
    printf("\n");

    return 0;
}
