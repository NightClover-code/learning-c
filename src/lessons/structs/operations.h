#ifndef OPERATIONS_H
#define OPERATIONS_H

struct Complex {
  double re;
  double img;
};

struct Complex somme(struct Complex *z1, struct Complex *z2);
struct Complex produit(struct Complex *z1, struct Complex *z2);
struct Complex division(struct Complex *z1, struct Complex *z2);
void printStuff(struct Complex z1, struct Complex z2);

#endif