#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  char ch1[100], ch2[100], ch3[100];
  int len1, len2;

  printf("Entrez deux chains de characteres: ");
  scanf("%s %s", &ch1, &ch2);

  len1 = strlen(ch1);
  len2 = strlen(ch2);

  strncpy(ch3, ch1, floor(len1 / (double)2));
  strncat(ch3, ch2, floor(len2 / (double)2));

  printf("Le resultat est: %s", ch3);

  return 0;
}