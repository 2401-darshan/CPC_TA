#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int backlogs;
};

int main()
{
    struct student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll, name and backlogs: ");
        scanf("%d %s %d", &s.roll, s.name, &s.backlogs);

        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlogs);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStudents having more than 5 backlogs:\n");

    while(fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF)
    {
        if(s.backlogs > 5)
        {
            printf("Roll Number: %d\n", s.roll);
        }
    }

    fclose(fp);

    return 0;
}