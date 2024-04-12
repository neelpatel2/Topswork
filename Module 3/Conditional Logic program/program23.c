//WAP to input the week number and print week day.
#include <stdio.h>

int main() {
    int week_number;

    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    // Handle invalid input
    if (week_number < 1 || week_number > 7) {
        printf("Invalid week number! Please enter between 1 and 7.\n");
        return 1;
    }

    switch (week_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }

    return 0;
}
