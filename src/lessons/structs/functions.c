#include "operations.h"

struct Complex res;

struct Complex somme(struct Complex *z1, struct Complex *z2) {
  res.re = (*z1).re + (*z2).re;
  res.img = (*z1).img + (*z2).img;

  return res;
};

struct Complex produit(struct Complex *z1, struct Complex *z2) {
  res.re = (*z1).re * (*z2).re - (*z1).img * (*z2).img;
  res.img = (*z1).img * (*z2).re + (*z2).img * (*z1).re;

  return res;
};

struct Complex division(struct Complex *z1, struct Complex *z2) {
  struct Complex *z3 = (struct Complex *)malloc(sizeof(struct Complex));

  (*z3).re = (*z2).re;
  (*z3).img = -(*z2).img;

  float denom = (*z2).re * (*z2).re + (*z2).img * (*z2).img;

  res.re = (produit(z1, z3).re) / denom;
  res.img = (produit(z1, z3).img) / denom;

  return res;
};

void printStuff(struct Complex z1, struct Complex z2) {
  printf("Somme = %.2lf + (%.2lf)i \n", somme(&z1, &z2).re,
         somme(&z1, &z2).img);
  printf("Produit = %.2lf + (%.2lf)i \n", produit(&z1, &z2).re,
         produit(&z1, &z2).img);
  printf("Division = %.2lf + (%.2lf)i \n", division(&z1, &z2).re,
         division(&z1, &z2).img);
};