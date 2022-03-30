#include <stdio.h>

int main() {
  int i, j, l, c, sum = 0, arr[100][100];

  printf("Entrez la dimension L: ");
  scanf("%d", &l);

  printf("Entrez la dimension C: ");
  scanf("%d", &c);

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      sum += arr[i][j];
    }
  }

  printf("tableau: [\n");

  for (i = 0; i < l; i++) {
    printf(" [ ");
    for (j = 0; j < c; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("],\n");
  }

  printf("]\n");

  printf("%d", sum);

  return 0;
}