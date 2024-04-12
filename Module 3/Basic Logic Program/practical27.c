//Convert days into months 
#include <stdio.h>

int main() {
    int days, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;
    remaining_days = days % 30;

    printf("%d days = %d months and %d days.\n", days, months, remaining_days);

    return 0;
}
