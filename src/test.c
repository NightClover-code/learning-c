#include <stdio.h>

int premier(int n) {
  int i, c = 0;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      c++;
    }
  }

  return c == 2 ? 1 : 0;
}

int main() {
  int n, i = 2, j = 0;
  int arr[1];

  printf("Entrez le nombre n: ");
  scanf("%d", &n);

  while (i >= 0 && j < n) {
    if (premier(i) == 1) {
      arr[j] = i;

      j++;
    }

    i++;
  }

  for (i = 0; i < j; i++) {
    printf("%d, ", arr[i]);
  }

  return 0;
}