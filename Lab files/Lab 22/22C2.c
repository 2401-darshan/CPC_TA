#include <stdio.h>

int main()
{
    FILE *fp, *temp;
    char line[100];
    int count = 0;

    fp = fopen("test.txt", "r");
    temp = fopen("temp.txt", "w");

    while (fgets(line, 100, fp) != NULL)
    {
        if (line[0] == '\n')
            continue;

        fputs(line, temp);
        count++;

        if (count == 3)
            fputc('\n', temp);
    }

    fclose(fp);
    fclose(temp);

    remove("test.txt");
    rename("temp.txt", "test.txt");

    printf("File updated successfully");

    return 0;
}