//Calculate sum of 10 numbers using of while loop 

#include <stdio.h>

int main() {
    int num, count = 1, sum = 0;

    printf("Enter 10 numbers:\n");

    while (count <= 10) {
        scanf("%d", &num);
        sum += num;
        count++;
    }

    printf("The sum of 10 numbers is: %d\n", sum);

    return 0;
}
