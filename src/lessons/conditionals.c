#include <stdio.h>

int main() {
  /* Notes:
        - If an "else if" statement evaluates to false, the program skips to
          check if the next one is true and so one.
        - The "else" statement runs if all above conditions were unmet.
  */

  double age;

  printf("Enter your age: ");
  scanf("%lf", &age);

  if (age >= 18) {
    printf("You are now signed in!");
  } else if (age < 0) {
    printf("Please make sure you are born first!");
  } else if (age == 0) {
    printf("You can't sign in, you were just born!");
  } else {
    printf("You are too young to sign in!");
  }

  return 0;
}