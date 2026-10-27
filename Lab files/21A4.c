#include <stdio.h>

struct student
{
    char name[30];
    float percentage;
    int age;
};

int main()
{
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter name, percentage and age: ");
        scanf("%s %f %d", s[i].name,
              &s[i].percentage, &s[i].age);
    }

    for(i = 0; i < 5; i++)
    {
        printf("\n%s %.2f %d", s[i].name,
               s[i].percentage, s[i].age);
    }

    return 0;
}