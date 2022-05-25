#include <stdio.h>

void minMax(int arr[], int min, int max) {
  /*
    This approach doesn't work because we're mutating copies of min and max,
    not the original values located inside of main()
  */
  min = max = arr[0];

  for (int i = 0; i < 5; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }

    if (min > arr[i]) {
      min = arr[i];
    }
  }
}

void pMinMax(int arr[], int *min, int *max) {
  /*
  Solution:
        use pointers that receive addresses of min and max, and store them
        in *max and *min. Now we can mutate the original variables, because
        we hold their addresses
*/
  *min = *max = arr[0];  // pointing to the first element

  for (int i = 0; i < 5; i++) {
    if (*max < arr[i]) {
      *max = arr[i];
    }

    if (*min > arr[i]) {
      *min = arr[i];
    }
  }
}

int main() {
  /*
    Goal: Find the largest & smallest elements of an array,
                using pointers
  */
  int i, min, max;
  int arr[] = {2, 94, 8, 65, 21};

  int len = sizeof(arr) / sizeof(arr[0]);

  // normal way
  // minMax(arr, min, max);

  // using pointers
  pMinMax(arr, &min, &max);

  printf("%d %d", min, max);
}