#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100];

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    // strlen()
    printf("\nLength of a = %d", strlen(a));
    printf("\nLength of b = %d", strlen(b));

    // strcpy()
    strcpy(c, a);
    printf("\nCopied string = %s", c);

    // strcmp()
    printf("\nstrcmp = %d", strcmp(a, b));

    // strlwr()
    strlwr(a);
    printf("\nLowercase = %s", a);

    // strupr()
    strupr(a);
    printf("\nUppercase = %s", a);

    // strcat()
    strcat(a, b);
    printf("\nConcatenated string = %s", a);
    
    // strrev()
    strrev(a);
    printf("\nReverse = %s", a);

    

    return 0;
}