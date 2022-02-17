#include <stdio.h>
#include <math.h>

int main()
{
  /* Notes:
        - During division in this section, x / y result is a float, ig: 2/3.
          Which means we need to store the result in a float, and change x or y to
          become a float during the operation.
        - When you preceed the variable by the "&" sign, it refers to its address, not the value.
          More on that later.
        - 'scanf' cannot read spaces, we use 'fgets' to read spaces.
  */

  double a = sqrt(9);   // square root
  double b = pow(2, 4); // 2 to the power of 4
  int c = round(3.14);
  int d = ceil(3.14);
  int e = sqrt(9);
  double f = sqrt(9);
  double g = sqrt(9);
  double h = sqrt(9);
  double i = sqrt(9);
  double j = sqrt(9);

  printf("\na: %lf", a);
  printf("\nb: %lf", b);
  printf("\nc: %lf", c);
  printf("\nd: %lf", d);
  printf("\ne: %lf", e);
  printf("\nf: %lf", f);
  printf("\ng: %lf", g);
  printf("\nh: %lf", h);
  printf("\ni: %lf", i);
  printf("\nj: %lf", j);

  return 0;
}
