//Vowel or Consonant using switch case
#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch); 

    ch = toupper(ch); 

    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel\n", ch);
            break;
        default:
            printf("%c is a consonant\n", ch);
    }

}
