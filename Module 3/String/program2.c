//2. Write a program in C to separate individual characters from a string. 
#include <stdio.h>
#include<string.h>

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin); 
  str[strcspn(str, "\n")] = '\0';

  printf("The characters of the string are:\n");

  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c ", str[i]);
  }

  printf("\n");
  return 0;
}
