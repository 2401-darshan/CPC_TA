#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp, *temp;
    int ch;
    int newWord = 1;

    fp = fopen("test.txt", "r");
    temp = fopen("temp.txt", "w");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (newWord && isalpha(ch))
        {
            ch = toupper(ch);
            newWord = 0; 
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            newWord = 1; 
        }

        fputc(ch, temp); 
    }

    fclose(fp);
    fclose(temp);

    remove("test.txt");
    rename("temp.txt", "test.txt");

    printf("File updated successfully\n");

    return 0;
}