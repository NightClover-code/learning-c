#include <stdio.h>
#include <string.h>

int main() {
  int i, j = 0, len = 5;
  char chars[100][100], temp[100];

  for (i = 0; i < len; i++) {
    printf("Entrez le mot %d: ", i);
    scanf("%s", &chars[i]);
  }

  for (i = 0; i < len / 2; i++) {
    strcpy(temp, chars[i]);
    strcpy(chars[i], chars[len - i - 1]);
    strcpy(chars[len - i - 1], temp);
  }

  for (i = 0; i < len; i++) {
    printf("%s ", chars[i]);
  }

  return 0;
}