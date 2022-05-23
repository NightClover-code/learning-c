#include <stdio.h>

int main() {
  int row = 3, col = 2;

  int arr[3][2] = {{2, 3}, {4, 5}, {6, 7}};

  int(*ptr)[3][2] = &arr;

  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 2; j++) {
      printf("%d, ", (*ptr)[i][j]);
    }
  }

  return 0;
}