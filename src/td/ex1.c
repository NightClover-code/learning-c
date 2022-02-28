#include <stdio.h>

int main() {
  unsigned short j, m, a;

  printf("Introduisez la date (jour, mois, annee): ");
  scanf("%d\t%d\t%d", &j, &m, &a);

  printf("donnees recus: 3\t");
  printf("jour:%d-mois:%d-annee:%d", j, m, a);

  return 0;
}