#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  float d, x1, x2, x;

  printf("Entrez 3 variables entieres: ");
  scanf("%d\t%d\t%d", &a, &b, &c);

  if (a == 0) {
    if (b == 0 || (b == 0 && c == 0)) {
      printf("L equation admet une infinite de solutions!");
    } else {
      x = -c / (float)b;

      printf("L'equation admet une solution: %0.2f", x);
    }
  } else {
    d = pow(b, 2) - 4 * a * c;

    if (d > 0) {
      x1 = (-b + sqrt(d)) / (float)(2 * a);
      x2 = (-b - sqrt(d)) / (float)(2 * a);

      printf(
          "L'equation admet deux solutions distinctes:\n x1: %0.2f\t x2: %0.2f",
          x1, x2);
    } else if (d < 0) {
      printf("L'equation n'admet pas de solution dans R!");
    } else {
      x = -b / (float)(2 * a);

      printf("L'equation admet une solution unique: %0.2f", x);
    }
  }

  return 0;
}