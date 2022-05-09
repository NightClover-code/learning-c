#include <stdio.h>
#include <string.h>

int main() {
  int i, j;
  int MAT[100][100] = {{1, 7}, {2, 5}, {8, 4}};

  int *pMAT[100][100];

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      pMAT[i][j] = &MAT[i][j];
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d, ", *pMAT[i][j]);
    }
  }
}