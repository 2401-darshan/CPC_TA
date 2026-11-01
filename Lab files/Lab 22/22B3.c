#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char line1[100], line2[100];

    fp1 = fopen("test.txt", "r");
    fp2 = fopen("copied.txt", "r");
    fp3 = fopen("result.txt", "w");

    while (1)
    {
        if (fgets(line1, 100, fp1) != NULL)
            fputs(line1, fp3);
        else
            break;

        if (fgets(line2, 100, fp2) != NULL)
            fputs(line2, fp3);
        else
            break;
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully");

    return 0;
}