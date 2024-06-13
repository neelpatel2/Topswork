//Write a program in C to print individual characters of a string in reverse order 
#include <stdio.h>

int main() {
  char str[100];

  printf("Enter a string: ");
  gets(str); 
  int length = 0; 
  while (str[length] != '\0') {
    length++;
  }
printf("The string in reverse order is:\n");

  for (int i = length - 1; i >= 0; i--) {
    printf("%c ", str[i]);
  }

  printf("\n");
}
