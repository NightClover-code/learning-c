#include <stdio.h>

int main() {
  int arr[] = {3, 8, 7, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      int *pArr = &arr[j];
      int *pArrNext = &arr[j + 1];

      if (*pArr > *pArrNext) {
        int temp = *pArr;
        *pArr = arr[j + 1];
        *pArrNext = temp;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}