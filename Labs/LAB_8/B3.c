/*
 * Lab 8 - Part B (Q3)
 * Problem Statement: Print first 50 numbers in series 1, 4, 7, 10... (AP with a=1, d=3).
 */

#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 50)
    {
        printf("%d ", i);
        i = i + 3;
    }

    return 0;
}
