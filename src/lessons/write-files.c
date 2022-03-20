#include <stdio.h>

int main() {
  FILE *pF = fopen("test.txt", "a");

  fprintf(pF, "I like me");

  fclose(pF);

  // remove("test.txt");

  return 0;
}
