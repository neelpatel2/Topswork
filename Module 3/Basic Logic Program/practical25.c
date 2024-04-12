//Accept 5 expense from user and find average of expense 
#include <stdio.h>

int main() {
    float expenses[5], total_expense , average_expense;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total_expense += expenses[i];
    }

    average_expense = total_expense / 5;

    printf("\nTotal Expense: %.2f\n", total_expense);
    printf("Average Expense: %.2f\n", average_expense);

    return 0;
}
