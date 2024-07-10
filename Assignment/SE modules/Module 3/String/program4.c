// Write a program in C to count the total number of words in a string. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int word = 0;

    printf("Enter a string: ");
    gets(str);
    char *num= strtok(str, " \t\n\r");

    while(num != NULL) {
        word++;
        num = strtok(NULL, " \t\n\r");
    }

    printf("Total number of words in the string: %d\n", word);
}

