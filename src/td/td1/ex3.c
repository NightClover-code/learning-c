#include <math.h>
#include <stdio.h>

int main() {
  int A, B, C;
  double S, P;

  printf("Entrez A, B et C: ");
  scanf("%d %d %d", &A, &B, &C);

  while (A + B <= C || B + C <= A || A + C <= B) {
    printf("Recommencez: ");
    scanf("%d %d %d", &A, &B, &C);
  }

  P = (A + B + C) / (double)2;

  S = sqrt(P * (P - A) * (P - B) * (P - C));

  printf("La surface de ABC est: %.2lf", S);

  return 0;
}