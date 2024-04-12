/*/ If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
minimum bill should be of Rs. 256/*/
#include <stdio.h>

int main() {
    int customer_id, units_consumed;
    float total_bill = 0.0, surcharge = 0.0, fixed_charge = 256.0;
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

    if (total_bill > 800) {
        surcharge = total_bill * 0.18;
        total_bill += surcharge;
    }

    total_bill = (total_bill < fixed_charge) ? fixed_charge : total_bill;

    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Total Bill Amount (without surcharge): Rs. %.2f\n", total_bill - surcharge);
    if (surcharge > 0) {
        printf("Surcharge (18%%): Rs. %.2f\n", surcharge);
    }
    printf("Total Bill Amount (including surcharge): Rs. %.2f\n", total_bill);

    return 0;
}
