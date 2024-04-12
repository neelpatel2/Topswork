/*/ WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers /*/
#include <stdio.h>

int main() {
    
    int numbers[10], even_count = 0, odd_count = 0, sum_even = 0, sum_odd = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
            sum_even += numbers[i];
        } else {
            odd_count++;
            sum_odd += numbers[i];
        }
    }
    printf("\nEven numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
