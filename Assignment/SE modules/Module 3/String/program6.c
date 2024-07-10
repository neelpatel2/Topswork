//Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <ctype.h> 

int main() {
  char str[100];
  int alphabets = 0, digits = 0, special_chars = 0;

  printf("Enter a string: ");
  gets(str); 
  for (int i = 0; str[i] != '\0'; i++) {
    char ch = str[i];

    if (isalpha(ch)) {
      alphabets++;
    } else if (isdigit(ch)) {
      digits++;
    } else {
      special_chars++;
    }
  }

  printf("Number of alphabets: %d\n", alphabets);
  printf("Number of digits: %d\n", digits);
  printf("Number of special characters: %d\n", special_chars);
}
