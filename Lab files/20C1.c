#include <stdio.h>

int main()
{
    char a[100], b[100], c[100];
    int i, n, x = 0;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    printf("Enter n: ");
    scanf("%d", &n);

    /* strncpy */
    for(i = 0; i < n && a[i] != '\0'; i++)
        c[i] = a[i];

    c[i] = '\0';

    printf("Copy = %s\n", c);



    /* strncmp */
    for(i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            x = 1;
            break;
        }
    }

    if(x == 0)
        printf("Same\n");
    else
        printf("Different\n");


    

    /* strncat */
    i = 0;

    while(a[i] != '\0')
        i++;

    int j = 0;

    while(j < n && b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';

    printf("Join = %s", a);

    return 0;
}