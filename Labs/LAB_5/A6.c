/*
 * Lab 5 - Part A (Q6)
 * Problem Statement: Check whether given character is vowel or consonant. (Using single if only)
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Using single if-else block with compound OR condition
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("'%c' is a Vowel.\n", ch);
    } else {
        printf("'%c' is a Consonant.\n", ch);
    }

    return 0;
}
