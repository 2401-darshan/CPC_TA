#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int backlogs;
};

int main()
{
    struct student s[50];
    FILE *fp;
    int n = 0, i, r;

    fp = fopen("student.txt", "r");

    while(fscanf(fp, "%d %s %d", &s[n].roll, s[n].name, &s[n].backlogs) != EOF)
    {
        n++;
    }

    fclose(fp);

    printf("Enter roll number to modify: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == r)
        {
            s[i].backlogs = 3;
        }
    }

    fp = fopen("student.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %d\n", s[i].roll, s[i].name, s[i].backlogs);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nUpdated Student Data:\n");

    while(fscanf(fp, "%d %s %d", &s[0].roll, s[0].name, &s[0].backlogs) != EOF)
    {
        printf("%d %s %d\n", s[0].roll, s[0].name, s[0].backlogs);
    }

    fclose(fp);

    return 0;
}