#include <math.h>
#include <stdio.h>

long SOMME_TAB(int tab[100], int n) {
  int i;
  long res;

  for (i = 0; i < n; i++) {
    res += tab[i];
  }

  return res;
}

int main() {
  int n, tab[100], i;

  printf("Introduire N: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Entrez l element %d: ", i);
    scanf("%d", &tab[i]);
  }

  long sum = SOMME_TAB(tab, n);

  printf("La somme des %d elements du tableau est: %ld", n, sum);

  return 0;
}