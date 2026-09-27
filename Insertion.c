#include <stdio.h>
#include <time.h>

int main() {

    int a[1000];
    int n = 1000;
    int i, j, key;

    FILE *fp;
    clock_t start, end;
    double time_taken;

    // ---------- BEST CASE ----------

    fp = fopen("best.txt", "r");

    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    start = clock();

    // Insertion Sort
    for (i = 1; i < n; i++) {

        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
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

    // Insertion Sort
    for (i = 1; i < n; i++) {

        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
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

    // Insertion Sort
    for (i = 1; i < n; i++) {

        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Worst Case Time = %f seconds\n", time_taken);

    return 0;
}