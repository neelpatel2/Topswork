//2. Write a program in C to separate individual characters from a string. 
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Individual characters separated from the string:\n");
    for(i = 0; str[i] != '\0'; i++) {
        printf(" %c ", str[i]);
    }

}
