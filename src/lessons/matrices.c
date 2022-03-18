#include <stdio.h>

int main() {
  /* Notes:
        - matrix: a 2D array, each element inside the array is an array.
  */

  int nums[3][3] = {{5, 6, 2}, {85, 12, 8}, {12, 6, 2}};

  int rows = sizeof(nums) / sizeof(nums[0]);
  int cols = sizeof(nums[0]) / sizeof(nums[0][0]);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", nums[i][j]);
    }
    printf("\n");
  }

  return 0;
}
