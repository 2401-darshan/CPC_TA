#include <stdio.h>

void display(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    display(a, n);

    return 0;
}
