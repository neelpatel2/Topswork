//While loop 
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        ++n; // Count number of digits
        num /= 10;
    }

    num = originalNum; // Restore original number for calculation

    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, n);
        num /= 10;
    }

    if (originalNum == result) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
