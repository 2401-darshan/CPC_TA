/*
 * Lab 6 - Part A (Q2)
 * Problem Statement: Enter basic salary of an employee and calculate Gross salary according to given conditions:
 * - Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic
 * - Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic
 * - Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic
 * Gross Salary = Basic Salary + HRA + DA
 */

#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if (basic >= 30000) {
        hra = basic * 0.30;
        da = basic * 0.95;
    } else if (basic >= 20000) {
        hra = basic * 0.25;
        da = basic * 0.90;
    } else if (basic >= 10000) {
        hra = basic * 0.20;
        da = basic * 0.80;
    } else {
        // Default allowances for basic < 10000
        hra = basic * 0.10;
        da = basic * 0.70;
    }

    gross = basic + hra + da;

    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", gross);

    return 0;
}
