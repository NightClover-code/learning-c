#include <stdio.h>
#include <string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  printf("%p", arr);

  printf("\n%p", &arr[0]);
}
