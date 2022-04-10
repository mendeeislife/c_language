#include <stdio.h>
#include <string.h>

int main() {
  char w1[100], w2[100];

  printf("Ehnii ug: ");
  scanf("%s", w1);
  printf("Hoydahi ug: ");
  scanf("%s", w2);

  if(strlen(w1) == strlen(w2)) {
    int x = 0;
    for(int i=0; i<strlen(w1); i++) {
      if(w1[i] == w2[i])
        x++;
      else
        break;
    }

    if(x == strlen(w1))
      printf("Adilhan\n");
    else
      printf("Adilhan bish\n");

  } else 
    printf("Adilhan bish\n");


  // if(strcmp(w1, w2) == 0)
  //   printf("Adilhan\n");
  // else
  //   printf("Adilhan bish\n");

  return 0;
}