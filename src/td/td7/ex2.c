#include <stdio.h>

int NCHIFFRES(int n) {
  int len = 1;

  while (n > 9 || n < -9) {
    n /= 10;

    len++;
  }

  return len;
}

int main() {
  int n;

  printf("Introduire nombre: ");
  scanf("%d", &n);

  int len = NCHIFFRES(n);

  printf("Le nombre %d a %d chiffres.", n, len);

  return 0;
}