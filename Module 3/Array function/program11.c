// WAP to perform Palindrome number using for loop and function 
#include <stdio.h>
int isPalindrome(int num) {
  int reversed = 0, remainder, original;
  original = num;

  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }
return (original == reversed);
}

int main() {
  int number;
 printf("Enter an integer: ");
  scanf("%d", &number);
if (isPalindrome(number)) {
    printf("%d is a palindrome number.\n", number);
  } else {
    printf("%d is not a palindrome number.\n", number);
  }
}
