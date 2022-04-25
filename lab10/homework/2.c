#include <stdio.h>
#include <string.h>

int check(char u[], char p[]) {
  char userName[4][20] = {
    "bat",
    "dorj",
    "bold",
    "tsetsgee"
  };
  char password[4][20] = {
    "123456",
    "password",
    "pass247",
    "justinbeaber"
  };
  for (int i = 0; i < 4; i++) {
    if(strcmp(userName[i], u) == 0 && strcmp(password[i], p) == 0)
      return 1;
  }
  return 0;
}
int main() {
  char user[20], pass[20];
  gets(user);
  gets(pass);
  
  printf("%d\n", check(user, pass));

  return 0;
}