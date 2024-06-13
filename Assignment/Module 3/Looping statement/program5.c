// write a program to print factorial of given number 
#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter a integer: ");
        scanf("%d", &num);
    } while (num < 0);
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", num, fact);
}
