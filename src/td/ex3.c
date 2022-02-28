#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  float p, s;

  printf("Introduisez les longeurs du triangle abc: ");
  scanf("%d\t%d\t%d", &a, &b, &c);

  p = (a + b + c) / (float)2;

  s = sqrt(p * (p - a) * (p - b) * (p - c));

  printf("La surface du triangle abc est: %.2f", s);

  return 0;
}