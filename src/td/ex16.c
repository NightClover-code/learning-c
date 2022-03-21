#include <stdio.h>

int main() {
  int i, j, k, l, c, p, sum = 0, res[100][100], arr1[100][100], arr2[100][100];

  printf("Entrez la dimension L: ");
  scanf("%d", &l);

  printf("Entrez la dimension C: ");
  scanf("%d", &c);

  printf("Entrez la dimension P: ");
  scanf("%d", &p);

  printf("### MATRICE T ###\n");

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("### MATRICE B ###\n");

  for (i = 0; i < c; i++) {
    for (j = 0; j < p; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &arr2[i][j]);
    }
  }

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      sum += arr1[i][j];
    }
  }

  printf("\n\nMatrice T: \n[\n");

  for (i = 0; i < l; i++) {
    printf(" [ ");
    for (j = 0; j < c; j++) {
      printf("%d ", arr1[i][j]);
    }
    printf("],\n");
  }

  printf("\nMatrice B: \n[\n");

  for (i = 0; i < c; i++) {
    printf(" [ ");
    for (j = 0; j < p; j++) {
      printf("%d ", arr2[i][j]);
    }
    printf("],\n");
  }

  printf("\n]");

  // printf("\n\nla somme de tout les elements de T est: %d", sum);

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      for (k = 0; k < p; k++) {
        res[i][j] += (arr1[i][k] * arr2[k][j]);
      }
    }
  }

  printf("\n\nMatrice K: \n[\n");

  for (i = 0; i < l; i++) {
    printf(" [ ");
    for (j = 0; j < c; j++) {
      printf("%d ", res[i][j]);
    }
    printf("],\n");
  }

  printf("\n]");

  return 0;
}