#include <stdio.h>

int main() {
  int arr[] = {2, 94, 8, 65, 21};
  int len = sizeof(arr) / sizeof(arr[0]);

  int i;
  int(*p)[5] = &arr;

  for (i = 0; i < len; i++) {
    printf("%d, ", (*p)[i]);
  }

  return 0;
}