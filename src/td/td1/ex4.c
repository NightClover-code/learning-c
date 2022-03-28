#include <math.h>
#include <stdio.h>

int main() {
  int XA, XB, YA, YB;
  double DIST;

  printf("Entrez les coordonnees (XA, YA): ");
  scanf("%d %d", &XA, &YA);

  printf("Entrez les coordonnees (XB, YB): ");
  scanf("%d %d", &XB, &YB);

  DIST = sqrt(pow(XA, 2) + pow(YB, 2));

  printf("La distance entre A et B est: %.2lf", DIST);

  return 0;
}