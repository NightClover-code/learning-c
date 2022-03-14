#include <math.h>
#include <stdio.h>

int main() {
  int n, num;
  float x, poly = 0.0;

  printf("Entrez le degre du polynome: ");
  scanf("%d", &n);

  printf("Entrez la valeur de x: ");
  scanf("%f", &x);

  for (int i = 0; i <= n; i++) {
    printf("Entrez le coffecient A%d: ", i);
    scanf("%d", &num);

    poly += (num * pow(x, i));
  }

  printf("La valeur du polynome de degre %d avec x = %0.2f est: %0.2f", n, x,
         poly);

  return 0;
}