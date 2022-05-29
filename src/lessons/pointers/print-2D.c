#include <stdio.h>

void print2D(int arr[2][2], int rows, int cols) {
  int *p;

  for (p = &arr[0][0]; p <= &arr[rows - 1][cols - 1]; p++) {
    printf("%d, ", *p);
  }
}

int main() {
  /* Notes:
      - Print 2D array using pointers
*/
  int arr[2][2] = {{2, 94}, {8, 65}};

  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

  print2D(arr, rows, cols);

  return 0;
}