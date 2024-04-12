//Write a program in C to extract a substring from a given string 
#include <stdio.h>
#include <string.h> 

int main() {
    char str[100], substring[100];
    int start_index, length;

    printf("Enter the original string: ");
    fgets(str, 100, stdin); 

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the starting index (from 0): ");
    if (scanf("%d", &start_index) != 1) {
        fprintf(stderr, "Error: Invalid input for starting index.\n");
        return 1;
    }

    printf("Enter the length of the substring: ");
    if (scanf("%d", &length) != 1) {
        fprintf(stderr, "Error: Invalid input for length.\n");
        return 1; 
    }

    if (start_index < 0 || start_index >= strlen(str) || length <= 0) {
        fprintf(stderr, "Error: Invalid start index or length.\n");
        return 1;
    }

    strncpy(substring, str + start_index, length);
    substring[length] = '\0';

    printf("The extracted substring is: %s\n", substring);

    return 0;
}
