//WAP to convert years into days and days into years 
#include <stdio.h>

int main() {
    int choice, years, days;
    double exact_years; // For storing exact years with decimals (days to years)

    printf("Enter your choice:\n");
    printf("1. Convert years into days\n");
    printf("2. Convert days into years\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the number of years: ");
            scanf("%d", &years);

            days = years * 365;
            printf("%d years = %d days.\n", years, days);
            break;
        case 2:
            printf("Enter the number of days: ");
            scanf("%d", &days);

            exact_years = (double)days / 365;

            printf("%d days =3 %.2lf years.\n", days, exact_years);
            break;
       
    }

    return 0;
}

