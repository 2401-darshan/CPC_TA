#include <stdio.h>
#include <time.h>

void merge(int a[], int low, int mid, int high)
{
    int temp[1000];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
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

    mergeSort(a, 0, n - 1);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Best Case Time = %f seconds\n", time_taken);


    // ---------- AVERAGE CASE ----------

    fp = fopen("average.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    mergeSort(a, 0, n - 1);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Average Case Time = %f seconds\n", time_taken);


    // ---------- WORST CASE ----------

    fp = fopen("worst.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    mergeSort(a, 0, n - 1);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Worst Case Time = %f seconds\n", time_taken);

    return 0;
}