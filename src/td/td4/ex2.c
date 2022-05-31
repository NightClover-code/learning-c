#include <stdio.h>

void sort(int arr[], int size) {
  int i, j;

  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      int *p1 = &arr[j];
      int *p2 = &arr[j + 1];

      if (*p1 < *p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
      }
    }
  }
}

void printArr(int arr[], int size) {
  int *p;

  for (p = arr; p < arr + size; p++) {
    printf("%d, ", *p);
  }
}

int main() {
  int n, i;

  int arr[10];
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Enter n: ");
  scanf("%d", &n);

  while (n > 10) {
    printf("Retry: ");
    scanf("%d", &n);
  }

  for (i = 0; i < size; i++) {
    printf("Entrez l element %d: ", i);
    scanf("%d", &arr[i]);
  }

  sort(arr, size);

  printArr(arr, size);

  return 0;
}