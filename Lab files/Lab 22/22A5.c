#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("test.txt", "r");
    fp2 = fopen("copied.txt", "w");

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully");

    fclose(fp1);
    fclose(fp2);

    return 0;
}