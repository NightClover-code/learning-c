#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]) {
  int i, len;
  int flag = 0;

  len = strlen(str);

  for (i = 0; i < len; i++) {
    if (str[i] != str[len - i - 1]) {
      flag = 1;
      break;
    }
  }

  if (flag) {
    printf("%s is not a palindrome", str);
  } else {
    printf("%s is a palindrome", str);
  }
}

void pointerPalindrome(char str[]) {
  char *p1, *p2;

  p1 = str;
  p2 = str + strlen(str) - 1;

  while (p2 >= p1) {
    if (*p1 == *p2) {
      p1++;
      p2--;
    } else {
      break;
    }
  }

  if (p1 > p2) {
    printf("%s is a palindrome", str);
  } else {
    printf("%s is not a palindrome", str);
  }
}

int main() {
  pointerPalindrome("ADBBA");

  return 0;
}