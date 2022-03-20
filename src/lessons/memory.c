#include <stdio.h>

int main() {
  /* Notes:
        - memory = an array of bytes within RAM (eg. street)
        - memory block = a single byte unit within memory, used to hold a value
     (eg. person)
        - memory address = the address of where a memory block is located (eg.
     home address)
  */

  char a[] = "Bro";
  char b = 'Y';
  char c = 'Z';

  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n", sizeof(b));
  printf("%d bytes\n", sizeof(c));

  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);

  return 0;
}