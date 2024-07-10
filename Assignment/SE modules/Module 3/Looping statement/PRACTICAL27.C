//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n 

#include <stdio.h>

int main() {
    int n, sign = 1;  
    double sum = 0.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += sign * (double)i / (i + 1);
            sign *= -1;  
        }

        printf("The sum of the series 1/2 - 2/3 + 3/4 - ... + %d/%d is %.2lf\n", n, n + 1, sum);
    }

    return 0;
}
