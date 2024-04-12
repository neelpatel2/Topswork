//Write a program in C to copy one string to another string. 
#include <stdio.h>

void copy_string(char *destination, char *source) {
  while (*source != '\0') {
    *destination = *source;
    destination++;
    source++;
  }
  *destination = '\0';
}

int main() {
  char source[100], destination[100];

  printf("Enter the source string: ");
  fgets(source, 100, stdin); 

  
  printf("Copying string...\n");

  copy_string(destination, source);

  printf("The copied string is: %s\n", destination);

}
