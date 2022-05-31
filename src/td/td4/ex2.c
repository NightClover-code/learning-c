#include <stdio.h>

void sort(int arr[], int size) {
  int i, j;

  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      int *p1 = &arr[j];
      int *p2 = &arr[j + 1];

      if (*p1 < *p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
      }
    }
  }
}

void printArr(int arr[], int size) {
  int i;

  for (i = 0; i < size; i++) {
    printf("%d, ", arr[i]);
  }
}

int main() {
  int arr[] = {3, 8, 7, 9, 100, 54, 7, 98};
  int size = sizeof(arr) / sizeof(arr[0]);

  sort(arr, size);

  printArr(arr, size);

  return 0;
}