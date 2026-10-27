#include <stdio.h>

struct date
{
    int day, month, year;
};

struct student
{
    char name[30];
    struct date dob;
};

int main()
{
    struct student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &s.dob.day,
          &s.dob.month, &s.dob.year);

    printf("\nName = %s", s.name);
    printf("\nDOB = %d/%d/%d", s.dob.day,
           s.dob.month, s.dob.year);

    return 0;
}