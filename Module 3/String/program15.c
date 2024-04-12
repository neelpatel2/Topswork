//Write a program in C to find the largest and smallest words in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char largest[20], smallest[20];
    int largest_length, smallest_length;

    printf("Enter a string: ");
    fgets(str, 100, stdin); 

    str[strcspn(str, "\n")] = '\0';

    int i = 0, j = 0;
    while (str[i] != ' ' && str[i] != '\0') {
        largest[j] = str[i];
        smallest[j] = str[i];
        i++;
        j++;
    }
    largest[j] = '\0';
    smallest[j] = '\0';
    largest_length = smallest_length = j;

    if (str[0] == '\0') {
        printf("Error: Empty string.\n");
        return 1; 
    }

    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }

        j = 0; 
        while (str[i] != ' ' && str[i] != '\0') {
            str[j] = str[i];
            i++;
            j++;
        }
        str[j] = '\0'; 

        int current_length = j;
        if (current_length > largest_length) {
            strcpy(largest, str);
            largest_length = current_length;
        } else if (current_length < smallest_length) {
            strcpy(smallest, str);
            smallest_length = current_length;
        }
    }

    printf("The largest word is: %s\n", largest);
    printf("The smallest word is: %s\n", smallest);
}
