//Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() {
    int num, count = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input: Please enter a positive integer.\n");
        return 1;
    }

    printf("Sum of natural numbers up to %d:\n", num);

    while (count <= num) {
        sum += count;
        count++;
    }

    printf("%d\n", sum);

    return 0;
}

