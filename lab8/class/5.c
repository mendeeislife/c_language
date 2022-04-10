#include <stdio.h>

int main() {
  char w1[50], w2[50], str[100];

  scanf("%s", w1);
  scanf("%s", w2);

  int j = 0;

  for(int i=0; i<strlen(w1); i++) {
    str[j] = w1[i];
    j++;
  }

  for(int i=0; i<strlen(w2); i++) {
    str[j] = w2[i];
    j++;
  }

  puts(str);

  return 0;
}