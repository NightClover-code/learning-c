#include <stdio.h>

int* findMid(int arr[], int len) { return &arr[len / 2]; }

int main() {
  /* Notes:
      - pointer = a variable-like reference that holds a memory address as a
     value to another variable.
     - some tasks are easily performed w/ pointers.
    - * = indirection operator (value at address)
*/
  int arr[] = {2, 94, 8, 65, 21};

  int len = sizeof(arr) / sizeof(arr[0]);

  int* mid = findMid(arr, len);

  printf("%d", *mid);

  return 0;
}