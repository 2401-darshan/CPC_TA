#include <stdio.h>

int main() {
    float a, b, c, largest, result;

    printf("Enter three numbers (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Find largest of first two using conditional operator
    largest = (a > b) ? a : b;

    // Multiply by third number
    result = largest * c;

    printf("Largest of first two numbers (%.2f, %.2f) = %.2f\n", a, b, largest);
    printf("Result of multiplication with third number (%.2f) = %.2f\n", c, result);

    return 0;
}
