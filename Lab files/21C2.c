#include <stdio.h>

struct time
{
    int hh, mm, ss;
};

int main()
{
    struct time t1, t2, sum;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hh, &t1.mm, &t1.ss);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hh, &t2.mm, &t2.ss);

    sum.ss = t1.ss + t2.ss;
    sum.mm = t1.mm + t2.mm + sum.ss / 60;
    sum.hh = t1.hh + t2.hh + sum.mm / 60;

    sum.ss %= 60;
    sum.mm %= 60;

    printf("Total time = %02d:%02d:%02d",
           sum.hh, sum.mm, sum.ss);

    return 0;
}