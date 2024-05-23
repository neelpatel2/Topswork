#include <stdio.h>

int main() {
    char ch;
    int choice, quantity, total_amount = 0, item_amount;
    printf("....Menu.....\n");        
    printf("1. Pizza - Rs.180/pcs\n");
    printf("2. Burger - Rs.100/pcs\n");
    printf("3. Dosa - Rs.120/pcs\n");
    printf("4. Idli - Rs.50/pcs\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                item_amount = quantity * 180;
                total_amount += item_amount;
                printf("Amount: Rs.%d\n", item_amount);
                break;

            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                item_amount = quantity * 100;
                total_amount += item_amount;
                printf("Amount: Rs.%d\n", item_amount);
                break;

            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                item_amount = quantity * 120;
                total_amount += item_amount;
                printf("Amount: Rs.%d\n", item_amount);
                break;

            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                item_amount = quantity * 50;
                total_amount += item_amount;
                printf("Amount: Rs.%d\n", item_amount);
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &ch); // Adding space before %c to consume whitespace characters

    } while (ch == 'y');

    printf("Total Amount is = Rs.%d\n", total_amount);

    return 0;
}
