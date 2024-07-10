// WAP to reverse a string and check that the string is palindrome or not 
#include <stdio.h>

int main() {
    char str[100]; 
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    int is_palindrome = 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    printf("Original string: %s\n", str);
    printf(is_palindrome ? "The string is a palindrome.\n" : "The string is not a palindrome.\n");

}

