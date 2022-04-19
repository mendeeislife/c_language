#include <stdio.h>

int count(char s[]) {
  int cnt = 0;
  int i = 0;
  while (s[i] != '\0') {
    if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
      cnt++;
    i++;
  }
  return cnt;
}

int main() {
  char str[1001];
  scanf("%[^\n]s", str);
  printf("%d\n", count(str));
  return 0;
}