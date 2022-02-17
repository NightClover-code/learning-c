#include <stdio.h>

int main() {
  /* Notes:
        - a constant is a fixed value that cannot be changed later,
          unlike most variables.
        - It's common to use uppercasing for constants.
  */

  double age;

  printf("Enter your age: ");
  scanf("%lf", &age);

  if (age >= 18) {
    printf("You are now signed in!");
  }

  return 0;
}