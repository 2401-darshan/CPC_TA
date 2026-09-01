/*
 * Lab 6 - Part A (Q1)
 * Problem Statement: Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user's choice.
 */

#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("=== Calculator Menu ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (choice == 1) {
        result = num1 + num2;
        printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 2) {
        result = num1 - num2;
        printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 3) {
        result = num1 * num2;
        printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
    }

    return 0;
}
