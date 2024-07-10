//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa
#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100];

    printf("Enter a sentence: ");
    gets(str); 
    printf("The modified sentence is: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (islower(ch)) {  
            str[i] = toupper(ch);
        } else if (isupper(ch)) {
            str[i] = tolower(ch);
        }
        printf("%c", str[i]);
    }
    printf("\n");
}
