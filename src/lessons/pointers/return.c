#include <stdio.h>

int* findMid(int arr[], int len) { return &arr[len / 2]; }

int main() {
  /* Notes:
      - Returning an address is equivalent to returning a pointer.
      - PS: NEVER return a local variable address,
      because the function and its local variables will get destroyed after use.
*/
  int arr[] = {2, 94, 8, 65, 21};

  int len = sizeof(arr) / sizeof(arr[0]);

  int* mid = findMid(arr, len);

  printf("%d", *mid);

  return 0;
}