//.Accept 5 names from user at run time.

#include <stdio.h>

int main() {
  char names[5][100]; 
  int i;

  for (i = 0; i < 5; i++) {
    printf("Enter name %d: ", i + 1);
    scanf("%s", names[i]); 
    }

  printf("\nThe names you entered are:\n");
  for (i = 0; i < 5; i++) {
    printf("%s\n", names[i]);
  }

}
