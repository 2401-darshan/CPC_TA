/*
 * Lab 6 - Part A (Q3)
 * Problem Statement: Check whether the entered character is upper case, lower case, digit or any special character.
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    } else {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}
