/*
 * Lab 6 - Part B (Q1)
 * Problem Statement: Input electricity unit charge and calculate total electricity bill:
 * - For first 50 units: Rs. 0.50/unit
 * - For next 100 units (51-150): Rs. 0.75/unit
 * - For next 100 units (151-250): Rs. 1.20/unit
 * - For units above 250: Rs. 1.50/unit
 * - An additional surcharge of 20% is added to the total bill.
 */

#include <stdio.h>

int main() {
    float units, bill_amount, surcharge, total_bill;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        bill_amount = units * 0.50;
    } else if (units <= 150) {
        bill_amount = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill_amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill_amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // 20% surcharge
    surcharge = bill_amount * 0.20;
    total_bill = bill_amount + surcharge;

    printf("Base Bill Amount : Rs. %.2f\n", bill_amount);
    printf("Surcharge (20%%)  : Rs. %.2f\n", surcharge);
    printf("Total Bill Amount: Rs. %.2f\n", total_bill);

    return 0;
}
