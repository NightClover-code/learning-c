#include <stdio.h>

void reverseArr(int arr[], int size) {
  int i, *p1, *p2, temp;

  for (i = 0; i < size / 2; i++) {
    p1 = &arr[i];
    p2 = &arr[size - i - 1];

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
  }
}

void printArr(int arr[], int size) {
  int *p;

  for (p = arr; p < arr + size; p++) {
    printf("%d, ", *p);
  }
}

int main() {
  int arr[] = {8, 3, 4, 6, 17, 27, 37, 49, 51};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverseArr(arr, size);

  printArr(arr, size);

  return 0;
}
