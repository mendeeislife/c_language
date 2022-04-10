#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[100];
  int vowels = 0;

  scanf("%s", str);

  for (int i = 0; i < strlen(str); i++) {
    str[i] = tolower(str[i]);  
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      vowels++;
    }
  }

  printf("%d\n", vowels);

  return 0;
}