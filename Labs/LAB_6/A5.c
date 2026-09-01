/*
 * Lab 6 - Part A (Q5)
 * Problem Statement: Read marks of five subjects. Calculate percentage and print class accordingly:
 * - Fail below 35
 * - Pass Class between 36 and 45
 * - Second Class between 46 and 60
 * - First Class between 61 and 70
 * - Distinction if percentage > 70
 */

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks of 5 subjects (out of 100 each): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage > 70) {
        printf("Class       : Distinction\n");
    } else if (percentage >= 61 && percentage <= 70) {
        printf("Class       : First Class\n");
    } else if (percentage >= 46 && percentage <= 60) {
        printf("Class       : Second Class\n");
    } else if (percentage >= 36 && percentage <= 45) {
        printf("Class       : Pass Class\n");
    } else {
        printf("Class       : Fail\n");
    }

    return 0;
}
