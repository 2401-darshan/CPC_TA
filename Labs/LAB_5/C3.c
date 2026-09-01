#include <stdio.h>

void main() {
    int num, mult, div;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Left shift by 1 multiplies by 2
    mult = num << 1;

    // Right shift by 1 divides by 2
    div = num >> 1;

    printf("%d multiplication using << 1 = %d\n", num, mult);
    printf("%d division by 2 (using >> 1) = %d\n", num, div);
}
