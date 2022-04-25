#include <math.h>
#include <stdio.h>

int main() {
  int i, n, values[100], temp;

  printf("Entrez le nombre d'elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Entrez la valeur %d: ", i);
    scanf("%d", &values[i]);
  }

  for (i = 0; i < n / 2; i++) {
    temp = values[i];
    values[i] = values[n - i - 1];
    values[n - i - 1] = temp;
  }

  printf("tableau inversee: [ ");

  for (i = 0; i < n; i++) {
    printf("%d ", values[i]);
  }

  printf("]");

  return 0;
}