// Find the Character Is Vowel or Not 
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (ch >= 'a' && ch <= 'z') {
        ch -= 32; 
    }
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
              }
}

