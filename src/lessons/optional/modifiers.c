#include <stdio.h>

int a = 1;  // memory allocated

int main() {
  extern int a;  // declaration, no memory allocation, goes outside of scope to
                 // find "a"

  printf("%d", a);

  return 0;
}