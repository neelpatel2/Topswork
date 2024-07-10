//.Write a program in C to combine two strings manually 
#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2); 
    
    i = 0;
    j = 0;
    while (str1[i] != '\0') {
        combined[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        combined[i] = str2[j];
        i++;
        j++;
    }

    combined[i] = '\0';

    printf("The combined string is: %s\n", combined);

}
