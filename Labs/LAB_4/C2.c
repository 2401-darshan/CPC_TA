/*
 * Lab 4 - Part C (Q2)
 * Problem Statement: Convert number of days into year, week & days.
 * Example: 375 days mean 1 year, 1 week and 3 days
 */

#include <stdio.h>

int main() {
    int total_days, years, weeks, days;

    printf("Enter number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days % 365) % 7;

    printf("%d days mean %d year, %d week and %d days\n", total_days, years, weeks, days);

    return 0;
}
