 //Accept 5 numbers from user and find those numbers factorials 
#include <stdio.h>

int main() {
    int num[5], i, fact;

    printf("Enter 5 positive integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);

        if (num[i] < 0) {
            printf("Factorial is not defined for negative numbers.\n");
            num[i] = -1; 
        }
    }

    printf("Factorials:\n");
    for (i = 0; i < 5; i++) {
        if (num[i] >= 0) { 
            fact = 1;
            for (int count = 1; count <= num[i]; count++) {
                fact *= count;
            }
            printf("Factorial of %d is %d\n", num[i], fact);
        } else {
            printf("Factorial not calculated for negative input.\n");
        }
    }

    return 0;
}
