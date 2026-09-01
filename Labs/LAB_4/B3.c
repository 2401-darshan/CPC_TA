/*
 * Lab 4 - Part B (Q3)
 * Problem Statement: Print temperature from Fahrenheit to Celsius. (Formula: c = (((f-32)*5))/9)
 */

#include <stdio.h>

int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (((f - 32.0) * 5.0)) / 9.0;

    printf("Temperature in Celsius = %.2f\n", c);

    return 0;
}
