//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 
#include <stdio.h>

int main() {
  int num, max_digit = 0, digit;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 0) {
    num = -num; 
  }
  while (num != 0) {
    digit = num % 10;
    if (digit > max_digit) {
      max_digit = digit;
    }
    num /= 10;
  }

  printf("Maximum digit: %d\n", max_digit);

  return 0;
}
