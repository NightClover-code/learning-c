#include <math.h>
#include <stdio.h>

int main() {
  int xa, xb, ya, yb;
  double d;

  printf("Introduisez les coordonnees de A: ");
  scanf("%d\t%d", &xa, &ya);

  printf("Introduisez les coordonnees de B: ");
  scanf("%d\t%d", &xb, &yb);

  d = sqrt(pow(xa, 2) + pow(yb, 2));

  printf("La distance entre A et B est: %.2lf", d);

  return 0;
}