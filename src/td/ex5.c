#include <math.h>
#include <stdio.h>

int main() {
  // double pbrut;
  // int tva, pnet;

  // printf("Entrez le prix net: ");
  // scanf("%d", &pnet);

  // printf("Entrez le tva: ");
  // scanf("%d", &tva);

  // pbrut = pnet + pnet * (tva / (double)100);

  // printf("Le prix brut est: %.2lf", pbrut);

  double pnet, pbrut;
  int tva;

  printf("Entrez le prix pbrut: ");
  scanf("%lf", &pbrut);

  printf("Entrez le tva: ");
  scanf("%d", &tva);

  pnet = pbrut / (1 + tva / (double)100);

  printf("Le prix net est: %.2lf", pnet);

  return 0;
}