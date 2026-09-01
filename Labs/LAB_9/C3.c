/*
 * Lab 9 - Part C (Q3)
 * Problem Statement: Output of given while loop programs.
 * 
 * Program 1:
 * void main() {
 *     int a = 25;
 *     while(a <= 27) {
 *         printf("%d ", a);
 *         a++;
 *     }
 * }
 * Expected Output: 25 26 27
 * 
 * Program 2:
 * #include <stdio.h>
 * void main() {
 *     while(0) {
 *         printf("Hello");
 *     }
 * }
 * Expected Output: (No output because condition is 0/false)
 */

#include <stdio.h>

void program1() {
    printf("=== Program 1 Output ===\n");
    int a = 25;
    while (a <= 27) {
        printf("%d ", a);
        a++;
    }
    printf("\n\n");
}

void program2() {
    printf("=== Program 2 Output ===\n");
    while (0) {
        printf("Hello");
    }
    printf("(No output executed because while condition is 0/false)\n");
}

int main() {
    program1();
    program2();
    return 0;
}
