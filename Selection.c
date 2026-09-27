#include <stdio.h>
#include <time.h>

int main() {
    int a[1000];
    int n = 1000;
    int i, j, min, temp;

    FILE *fp;
    clock_t start, end;
    double time_taken;

    // ---------- BEST CASE ----------

    fp = fopen("best.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Best Case Time = %f seconds\n", time_taken);


    // ---------- AVERAGE CASE ----------

    fp = fopen("average.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Average Case Time = %f seconds\n", time_taken);


    // ---------- WORST CASE ----------

    fp = fopen("worst.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Worst Case Time = %f seconds\n", time_taken);

    return 0;
}