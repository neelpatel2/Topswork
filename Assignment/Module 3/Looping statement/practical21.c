/*/ Accept 3 numbers from user using while loop and check each numbers 
palindrome /*/

#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversed = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        originalNum = num;  
        while (num != 0) {
            remainder = num % 10;
            reversed= reversed * 10 + remainder;
            num /= 10;
        }

        if (originalNum == reversed) {
            printf("%d is a palindrome.\n", originalNum);
        } else {
            printf("%d is not a palindrome.\n", originalNum);
        }

        reversed = 0;
    }

}