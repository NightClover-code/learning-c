#include <stdio.h>

int main() {
  /* Notes:
        - switch = a more efficient alternative to using many "else if"
          statements, allows a value to be testes for equality against cases.
        - if a user enters a lower case character, this program won't work.
          We need strings to handle uppercasing/lowercasing, more on that later.
  */

  char grade;

  printf("Enter your grade: ");
  scanf("%c", &grade);

  switch (grade) {
    case 'A':
      printf("perfect!\n");
      break;
    case 'B':
      printf("You did good!\n");
      break;
    case 'C':
      printf("You did okay!\n");
      break;
    case 'D':
      printf("At least not an F!\n");
      break;
    case 'F':
      printf("YOU FAILED!\n");
      break;
    default:
      printf("Only valid grades please!");
  }

  return 0;
}
