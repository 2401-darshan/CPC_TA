/*
 * Lab 6 - Part B (Q3)
 * Problem Statement: Three sides of a triangle are entered through keyboard.
 * Check whether the triangle is equilateral, isosceles, scalene, or right-angled triangle.
 */

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid Triangle. Type:\n");

        // Check Equilateral
        if (a == b && b == c) {
            printf("- Equilateral Triangle\n");
        } 
        // Check Isosceles
        else if (a == b || b == c || a == c) {
            printf("- Isosceles Triangle\n");
        } 
        // Check Scalene
        else {
            printf("- Scalene Triangle\n");
        }

        // Check Right-Angled (Pythagoras Theorem: a^2 + b^2 = c^2 or b^2 + c^2 = a^2 or a^2 + c^2 = b^2)
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
            printf("- Right-Angled Triangle\n");
        }

    } else {
        printf("The given side lengths do NOT form a valid triangle.\n");
    }

    return 0;
}
