//13.calculate the Factorial of a Given Number using while loop 

#include <stdio.h>

int main() {
    int num, fact = 1, count = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial  numbers.\n");
        return 1;
    }

    while (count <= num) {
        fact *= count;
        count++;
    }

    printf("The factorial of %d is %d\n", num, fact);

}
