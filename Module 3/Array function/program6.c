//
#include <stdio.h>
int main() {
  int size, choice;

  // Get array size from user
  printf("Enter the size of the arrays: ");
  scanf("%d", &size);

  // Declare arrays
  int arr1[size], arr2[size], result[size]; // Array to store results

  // Get user input for elements in both arrays
  printf("Enter elements for first array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter elements for second array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr2[i]);
  }

  printf("Menu:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication \n");
  printf("4. Exit\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      printf("Adding elements:\n");
      for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
        printf("%d + %d = %d\n", arr1[i], arr2[i], result[i]);
      }
      break;
    case 2:
      printf("Subtracting elements:\n");
      for (int i = 0; i < size; i++) {
        result[i] = arr1[i] - arr2[i];
        printf("%d - %d = %d\n", arr1[i], arr2[i], result[i]);
      }
      break;
    case 3:
      printf("Multiplying elements:\n");
      for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
        printf("%d * %d = %d\n", arr1[i], arr2[i], result[i]);
      }
      break;
   
    case 4:
      printf("Exiting the calculator...\n");
      break;
    default:
      printf("Invalid choice! Please try again.\n");
  }

}
