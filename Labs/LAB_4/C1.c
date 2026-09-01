#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    total_seconds = (total_seconds % 3600);
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("%d seconds = %02d:%02d:%02d\n", total_seconds, hours, minutes, seconds);

    return 0;
}
