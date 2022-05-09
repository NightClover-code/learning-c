
#include <stdio.h>
#include <string.h>

void *ECHANGE(char *ch1, char *ch2) {
  char temp[100];

  strcpy(temp, ch1);
  strcpy(ch1, ch2);
  strcpy(ch2, temp);
}

int main() {
  char ch1[100], ch2[100];

  printf("Entrez ch1 et ch2: ");
  scanf("%s %s", &ch1, &ch2);

  ECHANGE(ch1, ch2);

  printf("Apres l echange: \n");
  printf("ch1: %s\t ch2: %s\n", ch1, ch2);

  return 0;
}