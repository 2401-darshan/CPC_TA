#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
};

int main()
{
    struct student *p;

    p = (struct student*)malloc(sizeof(struct student));

    printf("Enter roll number: ");
    scanf("%d", &p->roll);

    printf("Enter name: ");
    scanf("%19s", p->name);

    printf("\nRoll Number = %d", p->roll);
    printf("\nName = %s", p->name);

    free(p);

    return 0;
}