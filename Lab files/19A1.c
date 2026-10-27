
#include <stdio.h>

int factFun(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int factRec(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factRec(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial using iteration = %d\n", factFun(n));
    printf("Factorial using recursion = %d", factRec(n));

    return 0;
}
