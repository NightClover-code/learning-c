#include <stdio.h>

int main() {
  /* Notes:
        - During division in this section, x / y result is a float, ig: 2/3.
          Which means we need to store the result in a float, and change x or y
          to become a float during the operation.
        - When you preceed the variable by the "&" sign, it refers to its
          address, not the value. More on that later.
        - 'scanf' cannot read spaces, we use 'fgets' to read spaces.
  */

  char name[25];  // 25 bytes
  int age;

  printf("\nWhat's your name?: ");
  scanf("%s", &name);

  // fgets(name, 25, stdin);

  printf("\nHow old are you?: ");
  scanf("%d", &age);

  printf("\nHello %s, how are you today?", name);
  printf("\nYou are %d years old", age);

  return 0;
}
