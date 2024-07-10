// Write a program to find out the max number from given array using function 

#include <stdio.h>
int findMax(int arr[], int size) {
  int max = arr[0]; 
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
return max;
}
int main() {
  int arr[] = {25, 11, 7, 75, 56};
  int n = sizeof(arr) / sizeof(arr[0]);
  int maxNumber = findMax(arr, n);
  printf("The largest element in the array is: %d\n", maxNumber);
}
