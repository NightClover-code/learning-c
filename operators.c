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

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%f\n", d);
  printf("%d\n", e);

  return 0;
}