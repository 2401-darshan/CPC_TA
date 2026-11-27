#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int backlogs;
};

void store()
{
    struct student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter roll, name and backlogs: ");
        scanf("%d %s %d", &s.roll, s.name, &s.backlogs);

        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlogs);
    }

    fclose(fp);
}

void find()
{
    struct student s;
    FILE *fp;

    fp = fopen("student.txt", "r");

    printf("\nStudents having more than 5 backlogs:\n");

    while(fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF)
    {
        if(s.backlogs > 5)
        {
            printf("%d\n", s.roll);
        }
    }

    fclose(fp);
}

void modify()
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

    printf("\nEnter roll number to modify: ");
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
}

void display()
{
    struct student s;
    FILE *fp;

    fp = fopen("student.txt", "r");

    printf("\nUpdated Student Data:\n");

    while(fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF)
    {
        printf("%d %s %d\n", s.roll, s.name, s.backlogs);
    }

    fclose(fp);
}

int main()
{
    store();
    find();
    modify();
    display();

    return 0;
}