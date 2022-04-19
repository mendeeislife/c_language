#include <stdio.h>
#include <string.h>

int is_valid(char pwd[]) {
  int k = 0, n = 0, q = 0;
  if (strlen(pwd) < 6) {
    return 1;
  }
  for (int i = 0; i < strlen(pwd); i++) {
    if (pwd[i] >= 'A' && pwd[i] <= 'Z') {
      k++;
    }
    if (pwd[i] >= '0' && pwd[i] <= '9') {
      n++;
    }
    if (pwd[i] == '?' || pwd[i] == '!' || pwd[i] == '$' || pwd[i] == '\0' || pwd[i] == '*' || pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+') {
      q++;
    }
  }

  if (k == 0) {
    return 2;
  }
  if (n < 3) {
    return 3;
  }
  if (q == 0) {
    return 4;
  }

  return 0;
}

int main() {
  int k;
  char password[100];
  printf("ta kodoo oruulna uu: ");
  scanf("%[^\n]s", password);
  k = is_valid(password);
  switch (k) {
    case 1:
      printf("Tanii kod ydaj 6 temdegtees butsen baih ystoi\n");
      break;
    case 2:
      printf("Tanii kodond ydaj neg tom useg orson baih ystoi\n");
      break;
    case 3:
      printf("Tanii kodond ydaj 3n shirheg too baih ystoi\n");
      break;
    case 4:
      printf("Tanii kodond ?, !, $, , *, (, ), –, + temdguudiin ali neg ni orsn baih ystoi\n");
      break;
    case 0:
      printf("Tanii kodiig huleen avlaa\n");
      break;
    default:
      printf("Error !");
      break;
  }
  return 0;
}