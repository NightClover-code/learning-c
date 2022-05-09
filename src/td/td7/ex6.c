#include <stdio.h>
#include <string.h>

void INSERER(int *pTab[], int x, int n) {
  int i;

  pTab[n] = &x;

  printf("\nTableau N + 1: \n");

  for (i = 0; i < 6; i++) {
    printf("%d, ", *pTab[i]);
  }
}

int main() {
  int *pTab[100], tab[100], i, n, x;

  printf("Entrez le nombre d elements: ");
  scanf("%d", &n);

  printf("Entrez l element a inserer: ");
  scanf("%d", &x);

  for (i = 0; i < n; i++) {
    printf("Element %d: ", i);
    scanf("%d", &tab[i]);
  }

  printf("Tableau N: \n");

  for (i = 0; i < n; i++) {
    printf("%d, ", tab[i]);
  }

  for (i = 0; i < n + 1; i++) {
    pTab[i] = &tab[i];
  }

  INSERER(pTab, x, n);

  return 0;
}
