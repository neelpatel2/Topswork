//14.Find ascii value of given number 
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0 || number > 127) {
        printf("The ASCII table covers printable characters (0-127). ");
        printf("Entered number is outside this range.\n");
    } else {
        char character = (char)number;
        printf("The ASCII value of %d is %d (%c).\n", number, number, character);
    }

    return 0;
}
