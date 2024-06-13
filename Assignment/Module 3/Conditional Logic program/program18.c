// Write a C program to calculate profit and loss on a transaction. 

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        float loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
