#include <stdio.h>

int main() {
  /* Notes:
        - array: a data structure that can store multiple values of the same
        - access elements using indeces
     type.
  */

  int prices[] = {5, 11, 15, 6};

  char name[] = "James";

  char cars[][10] = {"Mustang", "Corvette",
                     "Camaro"};  // array of strings - not mutable

  printf("First character: %c\n",
         name[0]);  // access element at index 0, outputs "J"

  name[1] = 6;  // mutate element at index 1

  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    printf("%d\n", prices[i]);
  }

  for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
    printf("%s\n", cars[i]);
  }

  return 0;
}