#include <stdio.h>

int main() {
  int j, m, a, recu;

  printf("Introduisez la date (jour mois annee) : ");
  recu = scanf("%d %d %d", &j, &m, &a);

  printf("donnees recues: %d\t", recu);
  printf("jour:%d mois:%d annee:%d", j, m, a);

  return 0;
}