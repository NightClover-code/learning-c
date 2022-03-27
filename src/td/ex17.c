#include <stdio.h>

int main() {
  int i, j, n, arr[100][100];

  printf("Entrez un entier naturel n: ");
  scanf("%d", &n);

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= i; j++) {
      if (j == 0) {
        arr[i][0] = 1;
      } else {
        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
      }
    }
  }

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}