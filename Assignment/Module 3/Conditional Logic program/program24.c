//Accept month number and display month name 
#include <stdio.h>

int main() {
    int month_number;

    printf("Enter month number (1-12): ");
    scanf("%d", &month_number);

    if (month_number < 1 || month_number > 12) {
        printf("Invalid month number!\n");
        return 1;
    }

    const char* month_names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Month Name: %s\n", month_names[month_number - 1]);

    return 0;
}
