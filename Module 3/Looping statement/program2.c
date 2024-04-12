//Write a program to Accept 5 numbers from user and display all numbers
#include <stdio.h>

int main() {
    int numbers[5];  

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);  
    }

    printf("\nThe entered numbers are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");  
     
}
