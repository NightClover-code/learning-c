#include <stdio.h>

int main()
{
  int age = 16;         // integer
  float gpa = 2.06;     // floating point nums
  char grade = 'B';     // single character
  char name[] = "Jack"; // array of characters (kinda like string)

  printf("You are %d years old! \n", age);      // print int
  printf("Hello %s! \n", name);                 // print string
  printf("Your average grade is %c \n", grade); // print char
  printf("Your gpa is %f \n", gpa);             // print float

  return 0;
}