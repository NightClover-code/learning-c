#include <stdio.h>
#include <string.h>

void MULTI_MATRICES(int *MAT1[100][100], int *MAT2[100][100],
                    int *MAT3[100][100], int n, int m, int p) {
  int i, j, k, mat3[100][100];

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      for (k = 0; k < p; k++) {
        mat3[i][j] += (*MAT1[i][k] * *MAT2[k][j]);
      }
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      MAT3[i][j] = &mat3[i][j];
    }
  }
}

int main() {
  int mat1[100][100], mat2[100][100];
  int *pMat1[100][100], *pMat2[100][100], *pMat3[100][100];
  int i, j, n, m, p;

  printf("Entrez la dimension N: ");
  scanf("%d", &n);

  printf("Entrez la dimension M: ");
  scanf("%d", &m);

  printf("Entrez la dimension P: ");
  scanf("%d", &p);

  printf("### MATRICE N ###\n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      pMat1[i][j] = &mat1[i][j];
    }
  }

  printf("### MATRICE M ###\n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      printf("Entrez la valeur [%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      pMat2[i][j] = &mat2[i][j];
    }
  }

  MULTI_MATRICES(pMat1, pMat2, pMat3, n, m, p);

  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      printf("%d, ", *pMat3[i][j]);
    }
  }

  return 0;
}
