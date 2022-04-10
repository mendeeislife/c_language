#include <stdio.h>

int main() {

  char str[100];

  printf("Uguulberee oruulna uu?\n");
  scanf("%[^\n]s", str);

  int state = 0; // state n 0 baigaad useg n seperator bish bol ug negeer nemegdene, character n seperator baival state 0 bolgool baina
  int count = 0;
  for(int i=0; str[i] != '\0'; i++) {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
      state = 0;
    else if (state == 0) {
      state = 1;
      ++count;
    }
  }

  printf("Uguulbert %d ug baina\n", count);
  
  return 0;
}