#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char str[]) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);  
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
  char str[1000], words[50][50];
  int w = 0, c = 0;

  scanf("%[^\n]s", str);

  for(int i=0; i<=strlen(str); i++) {
    if(str[i] == ' ' || str[i] == '\0') {
        words[w][c] = '\0';
        w++;
        c = 0;
    } else {
        words[w][c] = str[i];
        c++;
    }
  }
  int max = 0;
  int temp;
  for(int i=0; i<w; i++) {
      //countVowels(words[i]);
      if(max < countVowels(words[i])) {
          temp = i;
          max = countVowels(words[i]);
      }
  }

  printf("%s\n", words[temp]);

  return 0;
}