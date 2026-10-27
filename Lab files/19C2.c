
#include <stdio.h>

int fact(int n)
{
    int i, f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int main()
{
    int n, r, nCr, nPr;

    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);

    if (n < 0 || r < 0 || r > n)
    {
        printf("Invalid input");
        return 0;
    }

    nCr = fact(n) / (fact(r) * fact(n - r));
    nPr = fact(n) / fact(n - r);

    printf("nCr = %d\n", nCr);
    printf("nPr = %d", nPr);

    return 0;
}
