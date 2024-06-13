/*/Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. /*/
#include <stdio.h>

int main() {
    int customer_id, units_consumed;
    float total_bill = 0.0;
    char customer_name[50];

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customer_name); 

    printf("Enter Units Consumed: ");
    scanf("%d", &units_consumed);

    if (units_consumed <= 350) {
        total_bill = units_consumed * 1.20;
    } else if (units_consumed <= 600) {
        total_bill = 350 * 1.20 + (units_consumed - 350) * 1.50;
    } else if (units_consumed <= 800) {
        total_bill = 350 * 1.20 + 250 * 1.50 + (units_consumed - 600) * 1.80;
    } else {
        total_bill = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units_consumed - 800) * 2.00;
    }

    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Total Bill Amount: Rs. %.2f\n", total_bill);

}
