#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "w");

    printf("File created successfully");

    fclose(fp);

    return 0;
}