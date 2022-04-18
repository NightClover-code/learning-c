#include <stdio.h>
#include <string.h>

int main() {
  int i, len, sum = 0;
  char s[100];

  printf("Entrez une chaine de characteres: ");
  scanf("%s", &s);

  len = strlen(s);

  printf("La longeur de la chaine est: %d \n", len);

  for (i = 0; i < len; i++) {
    if (s[i] == 'e' || s[i] == 'E') {
      sum++;
    }
  }

  printf("Il y'a %d occurences de 'e'", sum);
}