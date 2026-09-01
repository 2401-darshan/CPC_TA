/*
 * Lab 4 - Part A (Q5)
 * Problem Statement: Print area of circle. (pie * r * r)
 */

#include <stdio.h>

#define PI 3.14159

int main() {
    float r, area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area of circle = %.2f\n", area);

    return 0;
}
