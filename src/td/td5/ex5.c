#include <math.h>
#include <stdio.h>
#include <string.h>

void removeFirst(char *ch1, char *ch2) {
  int i, j, len1, len2;
  int found = 0;

  len1 = strlen(ch1);
  len2 = strlen(ch2);

  for (i = 0; i < len1; i++) {
    found = 1;
    for (j = 0; j < len2; j++) {
      if (ch1[i + j] != ch2[j]) {
        found = 0;
        break;
      }
    }

    if (found == 1) {
      for (j = i; j <= len1 - len2; j++) {
        ch1[j] = ch1[j + len2];
      }

      break;
    }
  }
}

int main() {
  char ch1[100], ch2[100];
  int len1, len2;

  printf("Entrez deux chains de characteres: ");
  scanf("%s %s", &ch1, &ch2);

  removeFirst(ch1, ch2);

  printf("%s", ch1);

  return 0;
}
