// 1 + 2 + 3 + 4 + 5 + ... + n 
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle invalid input (optional)
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        // Calculate the sum
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        printf("The sum of the series 1 + 2 + 3 + ... + %d is %d\n", n, sum);
    }

    return 0;
}

