#include <stdio.h>

int main()
{
    FILE *fp;
    long i;
    char ch;

    fp = fopen("test.txt", "r");

    fseek(fp, 0, SEEK_END);

    long size = ftell(fp);

    for (i = size - 1; i >= 0; i--)
    {
        fseek(fp, i, SEEK_SET); 
        ch = fgetc(fp);         
        printf("%c", ch);       
    }

    fclose(fp);

    return 0;
}