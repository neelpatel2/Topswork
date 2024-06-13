  //. Store 5 numbers in array and sort it in ascending order //
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  int numbers[5];

  printf("Enter 5 numbers:\n");
  for (int i = 0; i < 5; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  printf("\nNumbers before sorting:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }

  bubbleSort(numbers, 5); 
  printf("\nNumbers after sorting:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }

  printf("\n");
  return 0;
}
