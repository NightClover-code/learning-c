#include <stdio.h>

void printReversedArray(int arr[], int len) {
  int *p;

  for (p = &arr[len - 1]; p >= arr; p--) {
    printf("%d, ", *p);
  }
}

int main() {
  int arr[] = {2, 94, 8, 65, 21};
  int len = sizeof(arr) / sizeof(arr[0]);

  printReversedArray(arr, len);

  return 0;
}