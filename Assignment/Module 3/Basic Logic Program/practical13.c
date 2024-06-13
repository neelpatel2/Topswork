// Find character value from ascii 
#include <stdio.h>

int main() {
    int ascii_value;

    printf("Enter an ASCII value : ");
    scanf("%d", &ascii_value);

    if (ascii_value < 0 || ascii_value > 127) {
        printf("Invalid ASCII value. Please enter a value between 0 and 127.\n");
        return 1; 
    }

    char character = (char)ascii_value;
    printf("The character corresponding to the ASCII value %d is '%c'.\n", ascii_value, character);

    return 0;
}
