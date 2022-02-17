#include <stdio.h>
#include <math.h>

int main()
{
  /* Problem:
        - Calculate the hypotenus of a right triangle using pythagore's theorem.
  */

  double a;
  double b;
  double c;

  printf("Enter side a: ");
  scanf("%lf", &a);

  printf("Enter side b: ");
  scanf("%lf", &b);

  c = sqrt(pow(a, 2) + pow(b, 2));

  printf("The hypotenus of the triangle abc is: %lf", c);

  return 0;
}