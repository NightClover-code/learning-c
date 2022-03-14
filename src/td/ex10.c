#include <stdio.h>

int main() {
  int u1 = 1, n, un;

  printf("Entrez un entier naturel superieur ou egal a 1: ");
  scanf("%d", &n);

  while (n < 1) {
    printf("Recommencez: ");
    scanf("%d", &n);
  }

  return 0;
}