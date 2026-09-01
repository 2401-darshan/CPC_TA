#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("31 Days\n");
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("30 Days\n");
            break;

        case 2:  // February
            printf("enter year: ");
            scanf("%d", &year);
            
            if( (year%4==0 && year%100!=0) || (year%400==0) ) {
            	printf("29 days (leap year)\n");
			}
			else {
				printf("28 days (not a leap year)\n");
			}
			break;
        default:
            printf("Invalid month number!");
            break;
    }

    return 0;
}
