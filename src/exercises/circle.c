#include <stdio.h>
#include <math.h>

int main()
{
  /* Problem:
        - Create a program that calculates the circumference of a circle,
          the radius should provided by the user.
        - BONUS: calculate area as well.
  */

  const double PI = 3.14159;

  double radius;
  double circumference;
  double area;

  printf("\nEnter radius of a circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * pow(radius, 2);

  printf("\nThe circumference is: %lf", circumference);
  printf("\nThe area is: %lf", area);

  return 0;
}