#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c, max;

  printf("Entrez trois valeurs entieres: ");
  scanf("%d\t%d\t%d", &a, &b, &c);

  if (a > b || b > c) {
    if (a > c) {
      max = a;
    } else {
      max = b;
    }
  } else {
    max = c;
  }

  // if (a > b && a > c) {
  //   printf("Le max est: %d", a);
  // } else if (b > a && b > c) {
  //   printf("Le max est: %d", b);
  // } else {
  //   printf("Le max est: %d", c);
  // }

  printf("Le max est: %d", max);

  return 0;
}