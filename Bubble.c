#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[1000];
    int i, j, temp;
    int n = 1000;
    FILE *fp;
    clock_t start, end;
    double time_taken;

    /* ---------- BEST CASE ---------- */

    fp = fopen("best.txt", "w");

    for (i = 1; i <= 1000; i++) {
        fprintf(fp, "%d ", i);
    }

    fclose(fp);

    /* Read best case */
    fp = fopen("best.txt", "r");

    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &a[i]);
    }

    fclose(fp);

    start = clock();

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Best Case Time = %f seconds\n", time_taken);


    /* ---------- AVERAGE CASE ---------- */

    fp = fopen("average.txt", "w");

    srand(time(NULL));

    for (i = 0; i < 1000; i++) {
        a[i] = rand() % 1000;
        fprintf(fp, "%d ", a[i]);
    }

    fclose(fp);

    start = clock();

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Average Case Time = %f seconds\n", time_taken);


    /* ---------- WORST CASE ---------- */

    fp = fopen("worst.txt", "w");

    for (i = 1000; i >= 1; i--) {
        fprintf(fp, "%d ", i);
    }

    fclose(fp);

    /* Read worst case */
    fp = fopen("worst.txt", "r");

    for (i = 0; i < n; i++) {
        fscanf(fp, "%d", &a[i]);
    }

    fclose(fp);

    start = clock();

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Worst Case Time = %f seconds\n", time_taken);

    return 0;
}


===================================================================================

===================================================================================


#include <stdio.h>
#include <time.h>

int main() {
    int a[1000];
    int n = 0;
    int i, j, temp;

    FILE *fp;
    clock_t start, end;
    double time_taken;

    // ------------ best case ------------- 
    fp = fopen("best.txt", "r");

    // Read elements from file
    for(i = 0; i < 1000; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    // Start time
    start = clock();

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // End time
    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Best Case Time = %f seconds\n", time_taken);

    // ------------ average case -------------
    fp = fopen("average.txt", "r");

    // Read elements from file
    for(i = 0; i < 1000; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    // Start time
    start = clock();

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // End time
    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Average Case Time = %f seconds\n", time_taken);

    // ------------ worst case -------------
    fp = fopen("worst.txt", "r");

    // Read elements from file
    for(i = 0; i < 1000; i++)
        fscanf(fp, "%d", &a[i]);

    fclose(fp);

    // Start time
    start = clock();

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // End time
    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Worst Case Time = %f seconds\n", time_taken);

    return 0;
}