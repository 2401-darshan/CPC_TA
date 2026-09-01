/*
 * Lab 4 - Part B (Q2)
 * Problem Statement: Print simple interest. (principal * roi * time period) / 100
 */

#include <stdio.h>

int main() {
    float principal, roi, time, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (ROI %%): ");
    scanf("%f", &roi);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    si = (principal * roi * time) / 100.0;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}
