#include <stdio.h>

int main() {
  FILE *pF = fopen("C:\\Users\\ADS\\OneDrive\\Bureau\\MEALS.txt", "r");
  char buffer[255];

  if (!pF) {
    printf("Unable to open file");

    return 1;
  }

  while (fgets(buffer, 255, pF)) {
    printf("%s", buffer);
  }

  fclose(pF);

  return 0;
}
