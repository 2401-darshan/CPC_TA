/*
 * Lab 9 - Part B (Q1)
 * Problem Statement: Print all uppercase and lowercase alphabets (using while loop).
 */

#include <stdio.h>

int main() {
    char ch;
    printf("=== Uppercase Alphabets (A-Z) ===\n");
    
    ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n\n");

    printf("=== Lowercase Alphabets (a-z) ===\n");
    
    ch = 'a';
	while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    return 0;
}
