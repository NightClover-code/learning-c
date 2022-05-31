#include <stdio.h>
#include <string.h>

void printArr(int arr[], int size) {
  int* p;

  for (p = arr; p < arr + size; p++) {
    printf("%d, ", *p);
  }
}

int main() {
  int* p;
  int l, c, i = 0;
  int mat[10][10], v[100];

  printf("Entrez l et c: ");
  scanf("%d %d", &l, &c);

  // remplissage mat
  for (p = &mat[0][0]; p <= &mat[l - 1][c - 1]; p++) {
    scanf("%d", p);
  }

  // transfere vers v
  for (p = &mat[0][0]; p <= &mat[l - 1][c - 1]; p++) {
    v[i] = *p;

    i++;
  }

  printArr(v, i);

  return 0;
}