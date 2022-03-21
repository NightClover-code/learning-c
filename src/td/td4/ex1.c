#include <stdio.h>

int main() {
  int arr[] = {8, 3, 4, 6, 17, 27, 37, 49, 51};

  int *pArr = NULL;

  pArr = arr;

  printf("%p\n", pArr);
  printf("%p", &pArr);

  return 0;
}
