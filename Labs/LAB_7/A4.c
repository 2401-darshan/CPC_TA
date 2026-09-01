#include <stdio.h>

int main() {
    float a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

    printf("The largest number is: %.2f\n", max);

    return 0;
}
