#include <stdio.h>
#include <string.h>

typedef struct {
  int re;
  int img;
} Complex;

void printCmplx(char s[], Complex z1) {
  printf("%s: %d + %di\n", s, z1.re, z1.img);
}

Complex createCmplx(int re, int img) {
  Complex z;

  z.re = re;
  z.img = img;

  return z;
}

Complex sumComplex(Complex z1, Complex z2) {
  Complex res;

  res.re = z1.re + z2.re;
  res.img = z1.img + z2.img;

  return res;
}

Complex prodCmplx(Complex z1, Complex z2) {
  Complex res;

  res.re = z1.re * z2.re - z1.img * z2.img;
  res.img = z1.re * z2.img + z2.re * z1.img;

  return res;
}

int main() {
  int re1, img1, re2, img2;
  Complex sum, prod;

  printf("Entrez le reel et l imaginaire de z1: ");
  scanf("%d %d", &re1, &img1);
  Complex z1 = createCmplx(re1, img1);

  printf("Entrez le reel et l imaginaire de z2: ");
  scanf("%d %d", &re2, &img2);
  Complex z2 = createCmplx(re2, img2);

  sum = sumComplex(z1, z2);
  prod = prodCmplx(z1, z2);

  printCmplx("somme", sum);
  printCmplx("produit", prod);

  return 0;
}