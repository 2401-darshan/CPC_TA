#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 Days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 Days\n");
            break;
        case 2:
            printf("Enter year: ");
            scanf("%d", &year);
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                printf("29 Days (Leap Year)\n");
            } else {
                printf("28 Days (Non-Leap Year)\n");
            }
            break;
        default:
            printf("Invalid month! Enter between 1 and 12.\n");
            break;
    }

    return 0;
}
