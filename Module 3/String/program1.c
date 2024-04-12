//Write a program in C to find the length of a string without using library functions.
#include <stdio.h>

int string_length(char str[]) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin); 

  int length = string_length(str);

  printf("The length of the string is: %d\n", length);

  return 0;
}
