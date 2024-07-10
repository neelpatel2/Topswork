//Write a program in C to remove characters from a string except alphabets. 
#include <stdio.h>
#include <ctype.h> 

void characters(char str[]) {
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
  gets(str); 
  printf("String before modification: %s\n", str);

  characters(str);
printf("String after removing characters: %s\n", str);

}
