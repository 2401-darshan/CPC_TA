/*
 * Lab 8 - Part C (Q2)
 * Problem Statement: Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + ... + n^2.
 */

#include <stdio.h>

int main() {
    int n, i = 1;
    long long sum = 0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");
    while (i <= n) {
        long long square = (long long)i * i;
        sum += square;

        if (i == 1) {
            printf("%lld", square);
        } else {
            printf(" + %lld", square);
        }
        i++;
    }

    printf("\nSum of series = %lld\n", sum);

    return 0;
}
