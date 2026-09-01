#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? printf("'%c' is an Alphabet.\n", ch) : printf("'%c' is NOT an Alphabet.\n", ch);

    return 0;
}
