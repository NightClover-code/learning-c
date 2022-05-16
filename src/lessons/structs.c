#include <stdio.h>
#include <string.h>

typedef struct {
  char name[12];
  int age;
} Person;

int main() {
  Person personA;
  Person personB;

  strcpy(personA.name, "Joe");  // can't mutate strings, use string copy
  personA.age = 19;             // mutate numbers directly

  strcpy(personB.name, "Alex");
  personB.age = 18;

  printf("Name: %s\t", personA.name);
  printf("Age: %d\n", personA.age);

  printf("Name: %s\t", personB.name);
  printf("Age: %d\n", personB.age);

  return 0;
}