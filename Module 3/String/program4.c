// Write a program in C to count the total number of words in a string. 
#include <stdio.h>
#include <ctype.h> // For isalnum

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  int word_count = 0;
  int in_word = 0; // Flag to track if currently processing a word

  for (int i = 0; str[i] != '\0'; i++) {
    char ch = str[i];

    if (isalnum(ch) || ch == '_') {
      if (!in_word) {
        word_count++; 
      }
      in_word = 1;
    } else {
      in_word = 0; 
    }
  }

  printf("Total number of words in the string: %d\n", word_count);

  return 0;
}
