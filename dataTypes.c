#include <stdio.h>
#include <stdbool.h>

int main()
{
  /* Notes:
        - bytes refer to memory.
        - if you exceed to value in the range, ig: char f = 128,
          an overflow occurs and resets f to 0.
        - C is not object-oriented, which means you can't directly declare
          a string as a data type, we're using arrays of characters in this section.
          More on strings later.
  */

  char a = 'C';       // single character
  char b[] = "Drake"; // array of characters - kinda like string

  float c = 3.146548;             // less precise floats - up to 7 digits
  double d = 3.14654651654651615; // more precise floats - up to 16 digits

  bool e = true; // boolean - true or false

  char f = 100;          // 1 byte (-128 to +127)
  unsigned char g = 122; // 1 byte (0 to +255)

  short h = 32767;          // 2 bytes (-32,728 to +32,767);
  unsigned short i = 65535; // 2 bytes (0 to +65535)

  int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647)
  unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295)

  long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to +9 quintillion)
  unsigned long long int m = 12223372036854775807U; // 8 bytes (0 to +18 quintillion)

  printf("%c\n", a);      // single character
  printf("%s\n", b);      // array of characters
  printf("%0.15f\n", c);  // float - show 15 digits
  printf("%0.15lf\n", d); // double - show 15 digits
  printf("%d\n", e);      // boolean
  printf("%d\n", f);      // char as an int
  printf("%c\n", g);      // unsigned char as a character - ASCII table
  printf("%d\n", h);      // short integer
  printf("%d\n", i);      // unsigned short integer
  printf("%d\n", j);      // integer
  printf("%u\n", k);      // unsigned integer
  printf("%lld\n", l);    // long long integer
  printf("%llu\n", m);    // unsigned long long integer

  return 0;
}