#include <stdio.h>

int main() {
  int a, b, c, x, t;

  printf("Introduisez trois valeurs entieres: ");
  scanf("%d\t%d\t%d", &a, &b, &c);

  x = c;
  t = b;
  b = a;
  c = t;
  a = x;

  printf("Les valeurs permutes sont: a:%d b:%d c:%d", a, b, c);

  return 0;
}