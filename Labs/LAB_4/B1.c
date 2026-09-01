/*
 * Lab 4 - Part B (Q1)
 * Problem Statement: Print area of triangle. ((height * base) / 2)
 */

#include <stdio.h>

int main() {
    float height, base, area;

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    area = (height * base) / 2.0;

    printf("Area of triangle = %.2f\n", area);

    return 0;
}
