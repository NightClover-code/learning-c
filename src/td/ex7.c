#include <math.h>
#include <stdio.h>

int main() {
  int n, i = 1, num, sum = 0, prod = 1;
  float moy;

  printf("Entrez le nombre de valeurs a utiliser: ");
  scanf("%d", &n);

  // while (i <= n) {
  //   printf("Entrez la valeur %i: ", i);
  //   scanf("%d", &num);

  //   sum += num;

  //   i++;
  // }

  for (i = 1; i <= n; i++) {
    printf("Entrez la valeur %i: ", i);
    scanf("%d", &num);

    sum += num;
    prod *= num;
    moy = sum / (float)n;
  }

  // do {
  //   printf("Entrez la valeur %i: ", i);
  //   scanf("%d", &num);

  //   sum += num;

  //   i++;
  // } while (i <= n);

  printf("La somme des %d entiers entres est: %d\n", n, sum);
  printf("Le produit des %d entiers entres est: %d\n", n, prod);
  printf("La moyenne des %d entiers entres est: %0.2f", n, moy);

  return 0;
}