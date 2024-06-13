//Write a program in C to find the length of a string without using library functions.
#include <stdio.h>
int length;
int string_length(char str[]) {
   length = 0;
  while (str[length] != '\0') {
    length++; 
  }
  return length;
} 

int main() {
  char str[100];
  int length;

  printf("Enter a string: ");
  gets(str);

  length = string_length(str);

  printf("The length of the string is: %d\n", length);
}
