#include <stdio.h>

int main() {
  int choice, num1, num2;
  float result; 

  printf("Menu:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Exit\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  switch (choice) {
    case 1:
      result = num1 + num2;
      printf("%d + %d = %.2f\n", num1, num2, result); 
      break;
    case 2:
      result = num1 - num2;
      printf("%d - %d = %.2f\n", num1, num2, result);
      break;
    case 3:
      result = num1 * num2;
      printf("%d * %d = %.2f\n", num1, num2, result);
      break;
    case 4:
      if (num2 == 0) {
        printf("Error: Division by zero!\n");
      } else {
        result = (float)num1 / num2;
        printf("%d / %d = %.2f\n", num1, num2, result);
      }
      break;
    case 5:
      printf("Exiting the calculator...\n");
      break;
    default:
      printf("Invalid choice! Please try again.\n");
  }
}
