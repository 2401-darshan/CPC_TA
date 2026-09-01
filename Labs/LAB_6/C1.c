/*
 * Lab 6 - Part C (Q1)
 * Problem Statement: Find the second largest number among three user input numbers.
 */

#include <stdio.h>

int main() {
    float a, b, c, second_largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        second_largest = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        second_largest = b;
    } else {
        second_largest = c;
    }

    printf("The second largest number is: %.2f\n", second_largest);

    return 0;
}
