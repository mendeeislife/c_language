#include <stdio.h>
#include <string.h>

int main() {
  char a[1000];
  scanf("%[^\n]s", a);

  for(int i=0; i<strlen(a); i++) {
    if(a[i] != ' ')
      printf("%c", a[i]);
    else
      printf("\n");
  }

  printf("\n");

  return 0;
}