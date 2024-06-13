//Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() {
    int num, count = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Sum of natural numbers up to %d:\n", num);

    while (count <= num) {
        sum += count;
        count++;
    }

    printf("%d\n", sum);
}

