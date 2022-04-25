#include <math.h>
#include <stdio.h>

double EXP(double a, int k) {
  int i;
  double res = 1.0;

  for (i = 0; i < k; i++) {
    res *= a;
  }

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