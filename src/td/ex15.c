#include <stdio.h>

int main() {
  int i, max, min, max_index = 0, min_index = 0,
                   arr[100] = {9, 3, 5, 3, 85, 6, 894};

  max = arr[0];
  min = arr[0];

  for (i = 0; i < 7; i++) {
    if (arr[i] < min) {
      min = arr[i];

      min_index = i;
    }

    if (arr[i] > max) {
      max = arr[i];

      max_index = i;
    }
  }

  printf("max dans l'index %d: %d\n", max_index, max);
  printf("min dans l'index %d: %d", min_index, min);

  return 0;
}