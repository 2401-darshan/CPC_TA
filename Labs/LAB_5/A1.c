/*
 * Lab 5 - Part A (Q1)
 * Problem Statement: Print given feet into inches. (inches = feet * 12)
 */

#include <stdio.h>

int main() {
    float feet, inches;

    printf("Enter height/length in feet: ");
    scanf("%f", &feet);

    inches = feet * 12.0;

    printf("%.2f feet = %.2f inches\n", feet, inches);

    return 0;
}
