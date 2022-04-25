#include <math.h>
#include <stdio.h>

double EXP(double a, int k) {
  double res = pow(a, k);

  return res;
}

int main() {
  double a;
  int k;

  printf("Entrez la valeur de a: ");
  scanf("%lf", &a);

  printf("Entrez la valeur de k: ");
  scanf("%d", &k);

  double res = EXP(a, k);

  printf("le resultat est: %.2lf", res);

  return 0;
}