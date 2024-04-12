//WAP Find out length of string without using inbuilt function
#include <stdio.h>

int main() {
    char str[100]; 
    printf("Enter a string: ");

    int count = 0;
    char ch;

    while ((ch = getchar()) != '\n' ) {
        str[count++] = ch;
    }

    str[count] = '\0';

    printf("The length of the string is %d\n", count);

    return 0;
}
