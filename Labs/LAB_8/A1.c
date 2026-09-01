#include <stdio.h>

int main() {
    int n, i;

    printf("--- 1 to 10 using while loop ---\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("Enter n to print 1 to n: ");
    scanf("%d", &n);

    printf("=== Using while loop (1 to %d) ===\n", n);
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("=== Using do-while loop (1 to %d) ===\n", n);
    i = 1;
    if (n >= 1) {
        do {
            printf("%d ", i);
            i++;
        } while (i <= n);
    }
    printf("\n");

    return 0;
}
