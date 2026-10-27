#include <stdio.h>

struct distance
{
    int feet, inches;
};

int main()
{
    struct distance d1, d2, sum;

    printf("Enter first distance (feet & inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    printf("Enter second distance (feet & inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    sum.feet += sum.inches / 12;
    sum.inches %= 12;

    printf("Total = %d feet %d inches",
           sum.feet, sum.inches);

    return 0;
}