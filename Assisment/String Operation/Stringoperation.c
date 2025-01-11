#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void reverseString(char str[]);
void concatenateStrings(char str1[], char str2[]);
void checkPalindrome(char str[]);
void findLength(char str[]);
void frequencyOfCharacter(char str[], char ch);
void countVowelsConsonants(char str[]);
void countSpacesDigits(char str[]);

int main() {
    char str1[100], str2[100], ch;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Reverse String\n");
        printf("2. Concatenate Strings\n");
        printf("3. Check Palindrome\n");
        printf("4. String Length\n");
        printf("5. Character Frequency\n");
        printf("6. Count Vowels & Consonants\n");
        printf("7. Count Spaces & Digits\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        if (choice >= 1 && choice <= 7) {
            printf("Enter the string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline
        }

        switch (choice) {
            case 1:
                reverseString(str1);
                break;
            case 2:
                printf("Enter the second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; // Remove newline
                concatenateStrings(str1, str2);
                break;
            case 3:
                checkPalindrome(str1);
                break;
            case 4:
                findLength(str1);
                break;
            case 5:
                printf("Enter character to find frequency: ");
                scanf("%c", &ch);
                frequencyOfCharacter(str1, ch);
                break;
            case 6:
                countVowelsConsonants(str1);
                break;
            case 7:
                countSpacesDigits(str1);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void reverseString(char str[]) {
    for (int i = strlen(str) - 1; i >= 0; i--)
        putchar(str[i]);
    printf("\n");
}

void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Result: %s\n", str1);
}

void checkPalindrome(char str[]) {
    int len = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    printf("Palindrome: %s\n", isPalindrome ? "Yes" : "No");
}

void findLength(char str[]) {
    printf("Length: %ld\n", strlen(str));
}

void frequencyOfCharacter(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] == ch)
            count++;
    printf("Frequency of '%c': %d\n", ch, count);
}

void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (strchr("aeiou", c))
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i]; i++) {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
    }
    printf("Spaces: %d, Digits: %d\n", spaces, digits);
}