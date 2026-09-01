#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }

    while (i < n) {
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }
        i++;
    }

    printf("Prime");

    return 0;
}