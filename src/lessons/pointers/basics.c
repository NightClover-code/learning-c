#include <stdio.h>

void printAge(int *pAge) { printf("You are %d years old", *pAge); }

int main() {
  /* Notes:
      - pointer = a variable-like reference that holds a memory address as a
     value to another variable.
     - some tasks are easily performed w/ pointers.
    - * = indirection operator (value at address)
*/

  int age = 21;
  int *pAge = NULL;

  pAge = &age;

  // printf("address of age: %p\n", &age);
  // printf("value of pAge: %p\n", pAge);

  // printf("value of age: %d\n", age);
  // printf("value at stored address: %d\n", *pAge);

  printAge(pAge);

  return 0;
}