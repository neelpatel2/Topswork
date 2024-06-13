//Write a program in C to extract a substring from a given string 
#include <stdio.h>
#include <string.h> 

int main() {
    char str[100], substring[100];
    int start, length;

    printf("Enter the original string: ");
    gets(str); 

    printf("Enter the starting index : ");
    if (scanf("%d", &start) )       
        
    printf("Enter the length of the substring: ");
    if (scanf("%d", &length) ) 
    
    strncpy(substring, str + start, length);
    substring[length] = '\0';

    printf("The extracted substring is: %s\n", substring);
}
