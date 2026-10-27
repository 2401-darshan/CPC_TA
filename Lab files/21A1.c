#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct employee e;

    printf("Enter id, name and salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.salary);

    printf("\nID = %d", e.id);
    printf("\nName = %s", e.name);
    printf("\nSalary = %.2f", e.salary);

    return 0;
}