#include <stdio.h>

int addNums(int a, int b) { return a + b; }

void doStuff() {
  print("I want to be repeated!");
  print("Me too!");
}

int main() {
  /* Notes:
        - Declare functions outside the main function.
        - The type inferred before the function , eg: "void" or "int" referes to
          the return type. "doStuff" returns nothing, which is void. "addNums"
          returns an integer, because "a + b" is an integer.
        - We can call functions with opening brackets, eg: "doStuff()".
  */

  doStuff();

  int result = addNums(3, 5);

  printf("Result: %d", result);

  return 0;
}