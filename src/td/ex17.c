#include <stdio.h>

void pascal(int n) {
  int i, j, arr[1000][1000];

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
}

int main() {
  int i, j, n, arr[100][100];

  printf("Entrez un entier naturel n: ");
  scanf("%d", &n);

  pascal(n);

  return 0;
}