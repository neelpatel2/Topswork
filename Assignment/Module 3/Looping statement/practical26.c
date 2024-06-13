// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 
#include <stdio.h>

int main() {
    int n, sum = 0, current_sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            current_sum += 1;

            for (int j = 2; j <= i; j++) {
                current_sum += j;
            }

            sum += current_sum;

            current_sum = 0;
        }

        printf("The sum of the series (1) + (1+2) + ... + (1+2+3+...+%d) is %d\n", n, sum);
    }

