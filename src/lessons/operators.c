#include <stdio.h>

int main()
{
  /* Notes:
        - During division in this section, x / y result is a float, ig: 2/3.
          Which means we need to store the result in a float, and change x or y to
          become a float during the operation.
  */

  int x = 5;
  int y = 2;

  int a = x + y; // addition
  int b = x - y; // subtraction
  int c = x * y; // multiplication

  float d = x / (float)y; // division - check notes
  int e = x % y;          // modulus - gives remainder

  /* SHORTCUTS
    x += 1 // x = x + 1
    x -= 1 // x = x - 1
    x *= 1 // x = x * 1
    x /= 1 // x = x / 1
    x %= 1 // x = x % 1
  */

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);
  printf("d: %f\n", d);
  printf("e: %d\n", e);

  return 0;
}