#include <math.h>
#include <stdio.h>

// int factorielle(int n) {
//   if (n != 0) {
//     return n * factorielle(n - 1);
//   }

//   return 1;
// }

int main() {
  int n, fact = 1, i = 1;

  printf("Entrez un entier naturel: ");
  scanf("%d", &n);

  if (n != 0) {
    while (i <= n) {
      fact *= i;

      i++;
    }
  } else {
    fact = 1;
  }

  printf("La factorielle de %d est: %d", n, fact);

  return 0;
}