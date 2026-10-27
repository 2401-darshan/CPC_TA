
#include <stdio.h>

void swap(int a[], int b[], int n)
{
    int i, temp;

    for (i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int i;

    swap(a, b, 3);

    printf("Array A: ");
    for (i = 0; i < 3; i++)
        printf("%d ", a[i]);

    printf("\nArray B: ");
    for (i = 0; i < 3; i++)
        printf("%d ", b[i]);

    return 0;
}
