#include <stdio.h>

int main() {
  int a, b, c, temp;

  printf("Entrez a, b et c: ");
  scanf("%d %d %d", &a, &b, &c);

  temp = a;
  a = c;
  c = b;
  b = temp;

  printf("variables permutees: a=%d b=%d c=%d", a, b, c);

  return 0;
}