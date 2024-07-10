// Convert years into days and months 
#include <stdio.h>

int main() {
    int years, days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);
   days = years * 365;
   months = days / 30;
   days %= 30;

    printf("%d years =", years);
    printf("%d months", months);
    printf("%d days", days);

    return 0;
}
