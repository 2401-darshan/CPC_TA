#include <stdio.h>

struct data
{
    int a;
    float b;
};

union value
{
    int a;
    float b;
};

int main()
{
    struct data s;
    union value u;

    printf("Enter integer and float: ");
    scanf("%d %f", &s.a, &s.b);

    printf("\nStructure: %d %.2f", s.a, s.b);

    printf("\nEnter integer for union: ");
    scanf("%d", &u.a);
    printf("Union integer = %d", u.a);

    printf("\nEnter float for union: ");
    scanf("%f", &u.b);
    printf("Union float = %.2f", u.b);

    return 0;
}