//Write a program to print table upto given number
#include <stdio.h>

int main() {
    int num, limit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the limit for the table: ");
    scanf("%d", &limit);

    printf("Multiplication Table of %d:\n", num);

    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

}
