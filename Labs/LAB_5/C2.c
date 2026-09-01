#include <stdio.h>

void main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is an Odd number", num);
    } else {
        printf("%d is an Even number", num);
    }
}
