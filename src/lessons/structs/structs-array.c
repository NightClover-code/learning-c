#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int re;
  int img;
} Complex;

void printCmplx(char s[], int i, Complex z1) {
  printf("%s%d: %d + %di\n", s, i, z1.re, z1.img);
}

int main() {
  Complex *Z;
  int N;

  printf("Longueur du tableau: ");
  scanf("%d", &N);

  Z = (Complex *)malloc(N * sizeof(Complex));

  for (int i = 0; i < N; i++) {
    printf("z%d: ", i);
    scanf("%d %d", &Z[i].re, &Z[i].img);
  }

  for (int i = 0; i < N; i++) {
    printCmplx("z", i, Z[i]);
  }

  return 0;
}