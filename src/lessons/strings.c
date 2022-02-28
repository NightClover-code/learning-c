#include <stdio.h>
#include <string.h>

int main() {
  /* Notes:
        - We can use string functions using the <string.h> header file.
  */

  char string1[] = "Bro";
  // char strings[] = {'c', 'c;
  char string2[] = "Code";

  strlwr(string1);  // converts string to lowercase
  strupr(string2);  // converts string to uppercase
  // strcat(string1, string2);      // appends string2 to the end of string1
  // strncat(string1, string2, 1);  // appends n characters from string2 to
  // strcpy(string1, string2);      // copy string2 to string1
  // strncpy(string1, string2, 4);  // copy n characters from string2 to string1

  // strset(string1, '?');      // sets all chars from string1 to given char
  // strnset(string1, 'x', 1);  // sets n chars from string1 to given char
  // strrev(string1);           // reverses string

  int result = strlen(string1);           // return string length as int
  int result = strcmp(string1, string2);  // compare chars from given strings
  int result = strncmpi();

  printf("%s\n", string1);
  printf("%s\n", string2);
  printf("%d", result);

  return 0;
}