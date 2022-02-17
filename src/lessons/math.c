#include <stdio.h>
#include <math.h>

int main()
{
  /* Notes:
        - Include the math library <math.h> to use math functions.
  */

  double a = sqrt(9);    // square root
  double b = pow(2, 4);  // 2 to the power of 4
  int c = round(3.6);    // rounds to the closest integer
  int d = ceil(3.14);    // rounds to the closest next integer
  int e = floor(8.9);    // rounds to the closest previous integer
  double f = fabs(-100); // absolute value
  double g = log(3);     // logarithms
  double h = sin(9);     // sinus
  double i = cos(9);     // cosinus
  double j = tan(9);     // tangent

  printf("\na: %lf", a);
  printf("\nb: %lf", b);
  printf("\nc: %d", c);
  printf("\nd: %d", d);
  printf("\ne: %d", e);
  printf("\nf: %lf", f);
  printf("\ng: %lf", g);
  printf("\nh: %lf", h);
  printf("\ni: %lf", i);
  printf("\nj: %lf", j);

  return 0;
}
