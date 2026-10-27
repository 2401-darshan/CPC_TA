#include <stdio.h>

int main()
{
    char a[100], b[100], c[100];
    int i = 0, len = 0, flag = 0;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    /* strlen */
    while (a[i] != '\0')
    {
        len++;
        i++;
    }

    printf("Length = %d\n", len);

    /* strcpy */
    i = 0;
    while (a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }
    c[i] = '\0';

    printf("Copy = %s\n", c);

    /* strcmp */
    i = 0;
    int x = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            break;
        i++;
    }
    x = a[i] - b[i];

    if (x > 0)
        printf("First string is greater\n");
    else if (x < 0)
        printf("Second string is greater\n");
    else
        printf("Both strings are equal\n");

    return 0;
}