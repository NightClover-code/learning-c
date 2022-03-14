#include <math.h>
#include <stdio.h>

int main() {
  int i, n, values[100], pos[100], neg[100], pos_count = 0, neg_count = 0;

  printf("Entrez le nombre d'elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Entrez la valeur %d: ", i);
    scanf("%d", &values[i]);
  }

  for (i = 0; i < n; i++) {
    if (values[i] >= 0) {
      pos[pos_count] = values[i];
      pos_count++;
    } else {
      neg[neg_count] = values[i];
      neg_count++;
    }
  }

  // tableau entiers
  printf("tableau: [ ");

  for (i = 0; i < n; i++) {
    printf("%d ", values[i]);
  }

  printf("]");

  // tableau pos
  printf("\ntableau pos: [ ");

  for (i = 0; i < pos_count; i++) {
    printf("%d ", pos[i]);
  }

  printf("]");

  // tableau neg
  printf("\ntableau neg: [ ");

  for (i = 0; i < neg_count; i++) {
    printf("%d ", neg[i]);
  }

  printf("]");

  return 0;
}