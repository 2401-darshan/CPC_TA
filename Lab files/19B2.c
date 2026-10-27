
#include <stdio.h>
#include <ctype.h>

void upper(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
}

int main()
{
    char s[100];

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    upper(s);

    printf("Uppercase = %s", s);

    return 0;
}
