#include <stdio.h>
#include <time.h>

void quickSort(int a[], int low, int high)
{
    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = a[high];

        i = low - 1;

        for (j = low; j < high; j++)
        {
            if (a[j] < pivot)
            {
                i++;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;

        int p = i + 1;

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[1000];
    int n = 1000;
    int i;

    FILE *fp;
    clock_t start, end;
    double time_taken;

    // ---------- BEST CASE ----------

    fp = fopen("best.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    quickSort(a, 0, n - 1);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Best Case Time = %f seconds\n", time_taken);


    // ---------- AVERAGE CASE ----------

    fp = fopen("average.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    quickSort(a, 0, n - 1);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Average Case Time = %f seconds\n", time_taken);


    // ---------- WORST CASE ----------

    fp = fopen("worst.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    quickSort(a, 0, n - 1);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Worst Case Time = %f seconds\n", time_taken);

    return 0;
}