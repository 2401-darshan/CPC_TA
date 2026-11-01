#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, lines = 0;

    fp = fopen("test.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    printf("Characters = %d\n", chars);
    printf("Spaces = %d\n", spaces);
    printf("Tabs = %d\n", tabs);
    printf("New lines = %d\n", lines);

    fclose(fp);

    return 0;
}