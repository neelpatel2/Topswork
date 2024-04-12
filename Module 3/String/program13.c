//Write a program in C to remove characters from a string except alphabets. 
#include <stdio.h>
#include <ctype.h> 

void remove_non_alphabetic_characters(char str[]) {
  int j = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      str[j++] = str[i];
    }
  }
  str[j] = '\0'; 
}
int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin); 

  str[strcspn(str, "\n")] = '\0';

  printf("String before modification: %s\n", str);

  remove_non_alphabetic_characters(str);

  printf("String after removing non-alphabetic characters: %s\n", str);

}
