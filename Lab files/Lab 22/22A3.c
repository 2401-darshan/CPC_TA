#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    char name[20];
    int age;

    fp = fopen("test.txt", "w");

    fprintf(fp, "Darshan 597");
    fputc('\n', fp);
    fclose(fp);

    fp = fopen("test.txt", "r");

    fscanf(fp, "%s %d", name, &age);

    printf("Name = %s\n", name);
    printf("Age = %d\n", age);

    fseek(fp, 0, SEEK_SET);

    ch = fgetc(fp);
    printf("First character = %c\n", ch);

    rewind(fp);

    ch = fgetc(fp);
    printf("After rewind = %c\n", ch);

    fclose(fp);

    return 0;
}