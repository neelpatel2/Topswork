// Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    char *word = "is"; 
    printf("Enter a string: ");
    fgets(str, 100, stdin); 
    str[strcspn(str, "\n")] = '\0';

    char *ptr = str; 

    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr++;
    }
    printf("The word '%s' appears %d times in the string.\n", word, count);
}
