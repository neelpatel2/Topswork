// Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
#include <ctype.h> 

int main() {
  char str[100];
  int vowels = 0, consonants = 0;

  printf("Enter a string: ");
  fgets(str, 100, stdin); 
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = tolower(str[i]);
  }

  for (int i = 0; str[i] != '\0'; i++) {
    char ch = str[i];
    if (isalpha(ch)) {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vowels++;
      } else {
        consonants++;
      }
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d\n", consonants);

  return 0;
}
