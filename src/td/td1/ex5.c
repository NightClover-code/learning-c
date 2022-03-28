#include <stdio.h>

int main() {
  int PNET, TVA;
  double PBRUT;

  printf("Entrez le prix net de l'article: ");
  scanf("%d", &PNET);

  printf("Entrez le TVA: ");
  scanf("%d", &TVA);

  PBRUT = PNET + PNET * (TVA / (double)100);

  printf("PBRUT de l'article: %.2lf", PBRUT);

  return 0;
}