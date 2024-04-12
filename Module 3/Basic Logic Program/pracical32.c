// Accept 2 numbers and find out its sum check it size 
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    printf("Size of sum  %lu bytes\n", sizeof(sum));

}
