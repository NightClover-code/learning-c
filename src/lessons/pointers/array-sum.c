#include <stdio.h>

int pArraySum(int arr[], int len) {
  int *p, sum = 0;

  for (p = arr; p <= arr + len - 1; p++) {
    sum += *p;
  }

  return sum;
}

int main() {
  /* Notes:
      - Returning an address is equivalent to returning a pointer.
      - PS: NEVER return a local variable address,
      because the function and its local variables will get destroyed after use.
*/
  int arr[] = {2, 94, 8, 65, 21};
  int len = sizeof(arr) / sizeof(arr[0]);

  int sum = pArraySum(arr, len);

  printf("Sum: %d", sum);

  return 0;
}