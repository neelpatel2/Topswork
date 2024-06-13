// Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
char str[100];
int vowels = 0, consonants = 0;
int i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); 
        if(isalpha(c)) {
       if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
     vowels++;
      }
     else {
      consonants++;
       }
    }
   }

    printf("Total number of vowels : %d\n", vowels);
    printf("Total number of consonants : %d\n", consonants);
}
