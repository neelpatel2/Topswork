//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>

int main() {
    int num, rev= 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not supported.\n");
    } else {
        for (rem = 0; num != 0; ++rem) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }

        printf("Reversed number: %d\n", rev);
    }

    return 0;
}
