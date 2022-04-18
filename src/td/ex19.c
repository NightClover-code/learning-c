#include <stdio.h>
#include <string.h>

int main() {
  int i, len, j = 0;
  char var[100], temp[100];

  printf("Entrez une chaine de characteres: ");
  scanf("%s", &var);

  len = strlen(var);

  for (i = 0; i < len; i++) {
    if (var[i] != 'e') {
      temp[j] = var[i];
      j++;
    }
  }

  printf("%d", strlen(temp));

  return 0;
}