#include <stdio.h>

void printArr(int arr[], int len) {
  int *p = arr;

  while (p <= arr + len - 1) {
    printf("%d, ", *(p++));
  }
}

int main() {
  int arr[] = {2, 94, 8, 65, 21};
  int len = sizeof(arr) / sizeof(arr[0]);

  printArr(arr, len);

  return 0;
}
