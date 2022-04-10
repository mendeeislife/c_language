#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  char s2[20] = "MUIS - iinhaan";

  for (int i = 0; i < strlen(s2); i++)
    s2[i] = s[i];

  printf("%s\n", s2);

  return 0;
}