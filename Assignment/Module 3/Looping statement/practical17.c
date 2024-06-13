/*/Calculate 5 numbers from user and calculate number of even and odd using 
of while loop/*/

#include <stdio.h>

int main() {
    int num, even_count = 0, odd_count = 0, count = 1;

    printf("Enter 5 integers:\n");
        scanf("%d", &num);

    while (count <= 5) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        count++;
    }

    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
}
