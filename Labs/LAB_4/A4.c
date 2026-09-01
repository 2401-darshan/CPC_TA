// Print average of three numbers (with & without scanf).

#include <stdio.h>

int main() {
    // Without scanf
    float n1 = 10.0, n2 = 20.0, n3 = 30.0, avg1;
    avg1 = (n1 + n2 + n3) / 3.0;
    printf("--- Without scanf ---\n");
    printf("Average = %f\n\n", avg1);

    // With scanf
    float num1, num2, num3, avg2;
    printf("--- With scanf ---\n");
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    avg2 = (num1 + num2 + num3) / 3.0;
    printf("Average = %f\n", avg2);

    return 0;
}
