// Print addition of 2 numbers (with & without scanf).
#include <stdio.h>
void main() {
    // // without scanf
    // int a = 5, b = 10, sum;
    // sum = a + b;
    // printf("Addition = %d", sum);



    // With scanf (User input)
    int a, b, sum=0;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Addition = %d", sum);
}
