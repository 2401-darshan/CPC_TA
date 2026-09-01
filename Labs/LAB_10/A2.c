#include <stdio.h>

int main()
{
    int n, sum = 0, count = 0;
    float average;
    printf("Enter number: ");
    while (1) {
        scanf("%d", &n);

        if (n == -1) {
            break;
        }
        else {
            sum = sum + n;
            count++;
        }
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}