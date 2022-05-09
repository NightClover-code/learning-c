#include <stdio.h>
#include <string.h>

int EGAL_N_CH(char* ch1, char* ch2, int n) {
  int test = strncmp(ch1, ch2, n);

  if (test == 0) {
    return 1;
  };

  return 0;
}

int main() {
  int value = EGAL_N_CH("l444", "l444", 6);

  printf("%d", value);

  return 0;
}