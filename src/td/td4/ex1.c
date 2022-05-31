#include <stdio.h>

int main() {
  int arr[] = {1, 3, 4, 6, 17, 27, 37, 49, 51};

  int *pt = NULL;

  pt = arr;

  printf("%p\n", &arr[4] - 3);
  printf("%p", &arr[1]);

  return 0;
}
