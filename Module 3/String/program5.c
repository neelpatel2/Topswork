//Write a program in C to compare two strings without using string library functions
#include <stdio.h>

int compare_strings(char *str1, char *str2) {
  while (*str1 != '\0' && *str2 != '\0') {
    if (*str1 != *str2) {
      return *str1 < *str2 ? -1 : 1;
    }
    str1++;
    str2++;
  }

  if (*str1 == '\0' && *str2 != '\0') {
    return -1;
  } else if (*str1 != '\0' && *str2 == '\0') {
    return 1;
  }

  return 0; 
}

int main() {
  char str1[100], str2[100];

  printf("Enter the first string: ");
  fgets(str1, sizeof(str1), stdin);

  

  printf("Enter the second string: ");
  fgets(str2, sizeof(str2), stdin);

  int result = compare_strings(str1, str2);

  if (result == 0) {
    printf("Strings are equal.\n");
  } else if (result == -1) {
    printf("String 1 is less than String 2.\n");
  } else {
    printf("String 1 is greater than String 2.\n");
  }

  return 0;
}
