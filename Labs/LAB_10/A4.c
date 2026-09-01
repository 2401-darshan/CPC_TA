#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    // First loop: Reverse the number
    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    
    // Second loop: Reverse again and print digits
    while (rev > 0) {
        digit = rev % 10;
        printf("%d ", digit);
        rev = rev / 10;
    }

    return 0;
}