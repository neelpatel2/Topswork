//Write a program in C to print individual characters of a string in reverse order 
#include <stdio.h>

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin); 
  int length = 0; 
  while (str[length] != '\0') {
    length++;
  }
printf("The characters of the string in reverse order is:\n");

  for (int i = length - 1; i >= 0; i--) {
    printf("%c ", str[i]);
  }

  printf("\n");
  return 0;
}
