//Calculate sum of 10 numbers using of while loop 

#include <stdio.h>

int main() {
    int num, count = 1, sum = 0;

    printf("Enter 10 numbers:\n");
        scanf("%d", &num);

    while (count <= 10) {
        sum += num;
        count++;
    }

    printf("The sum of 10 numbers is: %d\n", sum);
}
