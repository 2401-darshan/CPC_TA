/*
 * Lab 6 - Part A (Q4)
 * Problem Statement: Input an integer number and check if the last digit of the number is even or odd.
 */

#include <stdio.h>

int main() {
    int num, last_digit;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Get last digit (handling negative numbers using abs or modulus)
    last_digit = num % 10;
    

    if (last_digit % 2 == 0) {
        printf("The last digit of %d is %d, which is EVEN.\n", num, last_digit);
    } else {
        printf("The last digit of %d is %d, which is ODD.\n", num, last_digit);
    }

    return 0;
}
