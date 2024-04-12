// write a program to print factorial of given number 
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &num);
    } while (num < 0);

    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}
