#include <stdio.h>

int main() {
  int i, j, l, c, p, arr[100][100], sum = 0, res[100][100];

  printf("Entrez la dimension L: ");
  scanf("%d", &l);

  printf("Entrez la dimension C: ");
  scanf("%d", &c);

  printf("Entrez la dimension P: ");
  scanf("%d", &c);

  printf("### MATRICE T ###");

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  printf("### MATRICE B ###");

  for (i = 0; i < c; i++) {
    for (j = 0; j < p; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      sum += arr[i][j];
    }
  }

  printf("tableau T: [ ");

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", arr[i][j]);
    }
  }

  printf("]");

  printf("\nla somme de tout les elements de T est: %d", sum);

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      for (j = 0; k < c; j++) {
        // res[]
      }
    }
  }

  return 0;
}