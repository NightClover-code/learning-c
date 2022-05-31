#include <stdio.h>
#include <stdlib.h>

struct Complex {
  int re;
  int img;
};

void printCmplx(char s[], struct Complex z1) {
  printf("%s: %d + %di\n", s, z1.re, z1.img);
}

int main() {
  struct Complex z1;
  struct Complex z2;

  z1.re = 2;
  z1.img = -3;

  printCmplx("z1", z1);

  return 0;
}