#include <stdio.h>

int main() {
  /* Notes:
        - array: a data structure that can store multiple values of the same
        - access elements using indeces
     type.
  */

  int prices[] = {5, 11, 15, 6};

  char name[] = "James";

  printf("%c", name[0]);  // access element at index 0, outputs "J"

  name[1] = 6;  // mutates element at index 1

  return 0;
}