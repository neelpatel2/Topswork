/*/WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice /*/
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int arr[], int size, int order) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (order * (arr[j] < arr[minIndex])) { 
        minIndex = j;
      }
    }
    swap(&arr[i], &arr[minIndex]);
  }
}

int main() {
  int size;
printf("Enter the size of the arrays: ");
scanf("%d", &size);
int arr1[size], arr2[size];
printf("Enter elements for array 1:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
  }
printf("Enter elements for array 2:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr2[i]);
  }
int choice;
  printf("Enter your choice for sorting order:\n");
  printf("1. Ascending\n");
  printf("2. Descending\n");
  scanf("%d", &choice);

 int order = (choice == 1) ? 1 : -1; 
selectionSort(arr1, size, order);
selectionSort(arr2, size, order);
printf("Sorted array 1: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");
 printf("Sorted array 2: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}

