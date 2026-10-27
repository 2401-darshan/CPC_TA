#include <stdio.h>

int main()
{
    char str[100], *p;

    printf("Enter string: ");
    gets(str);

    p = str;

    while(*p != '\0')
    {   
        if((*p >= 'A' && *p <= 'Z') ||
           (*p >= 'a' && *p <= 'z') ||
           (*p >= '0' && *p <= '9')) {
            printf("%c", *p);
	}
        p++;
    }

    return 0;
}