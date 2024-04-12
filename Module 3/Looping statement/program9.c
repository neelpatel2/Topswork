//Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include <stdio.h>

int main() {
  int num, sum = 0, digit;

  printf("Enter an integer: ");
  scanf("%d", &num);

  while (num != 0) {
    digit = num % 10;
    sum += digit; 
    num /= 10;
  }

  printf("Sum of digits: %d\n", sum);

  return 0;
}
