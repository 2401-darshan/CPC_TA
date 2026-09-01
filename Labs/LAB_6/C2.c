/*
 * Lab 6 - Part C (Q2)
 * Problem Statement: Convert RGB color values (0-255) to CMYK format (0.0 to 1.0).
 * Formulas:
 * White = Max(red/255, green/255, blue/255)
 * Cyan = (White - red/255) / White
 * Magenta = (White - green/255) / White
 * Yellow = (White - blue/255) / White
 * Black = 1 - White
 * Note: If RGB values are all 0, CMY values are all 0 and K = 1.
 */

#include <stdio.h>

float max_val(float a, float b, float c) {
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int r, g, b;
    float r_norm, g_norm, b_norm;
    float white, cyan, magenta, yellow, black;

    printf("Enter RGB values (0-255 for Red, Green, Blue): ");
    scanf("%d %d %d", &r, &g, &b);

    if (r == 0 && g == 0 && b == 0) {
        cyan = 0.0;
        magenta = 0.0;
        yellow = 0.0;
        black = 1.0;
    } else {
        r_norm = r / 255.0;
        g_norm = g / 255.0;
        b_norm = b / 255.0;

        white = max_val(r_norm, g_norm, b_norm);

        cyan = (white - r_norm) / white;
        magenta = (white - g_norm) / white;
        yellow = (white - b_norm) / white;
        black = 1.0 - white;
    }

    printf("\n=== CMYK Color Values ===\n");
    printf("Cyan    (C) : %.4f\n", cyan);
    printf("Magenta (M) : %.4f\n", magenta);
    printf("Yellow  (Y) : %.4f\n", yellow);
    printf("Black   (K) : %.4f\n", black);

    return 0;
}
