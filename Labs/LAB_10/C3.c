/*
 * Lab 10 - Part C (Q3)
 * Problem Statement: Output of the following program demonstrating comma operator in while loop.
 * 
 * Program:
 * #include<stdio.h>
 * int main() {
 *     int i = 0, j = 0;
 *     while (i < 5, j < 10) {
 *         i++;
 *         j++;
 *     }
 *     printf("%d %d", i, j);
 * }
 * 
 * Explanation:
 * The comma operator (i < 5, j < 10) evaluates both expressions left-to-right,
 * but returns the result of the RIGHTMOST expression (j < 10).
 * Thus, the loop continues until j reaches 10.
 * Expected Output: 10 10
 */

#include <stdio.h>

int main() {
    int i = 0, j = 0;

    while (i < 5, j < 10) {
        i++;
        j++;
    }

    printf("Output: %d %d\n", i, j);

    return 0;
}
