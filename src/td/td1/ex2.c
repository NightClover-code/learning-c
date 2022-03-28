#include <stdio.h>

int main() {
  int A, B, C, temp;

  printf("Entrez a, b et c: ");
  scanf("%d %d %d", &A, &B, &C);

  temp = A;
  A = C;
  C = B;
  B = temp;

  printf("variables permutees: A=%d B=%d C=%d", A, B, C);

  return 0;
}