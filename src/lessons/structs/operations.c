
#include "operations.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
  struct Complex z1;
  struct Complex z2;

  printf("Entrez z1: ");
  scanf("%lf %lf", &z1.re, &z1.img);

  printf("Entrez z2: ");
  scanf("%lf %lf", &z2.re, &z2.img);

  printStuff(z1, z2);

  return 0;
}