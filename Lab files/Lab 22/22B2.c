#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    int newWord = 1;

    fp = fopen("test.txt", "r+");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (newWord && isalpha(ch))
        {
            fseek(fp, -1, SEEK_CUR);
            fputc(toupper(ch), fp);
            newWord = 0;
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            newWord = 1;
        }
    }

    fclose(fp);

    printf("File updated successfully\n");

    return 0;
}