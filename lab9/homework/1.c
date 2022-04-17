#include <stdio.h>

int isPalindrome(int n);

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", isPalindrome(n));

  return 0;
}

int isPalindrome(int n) {
  int t = n, k = 0;

  while (n > 0) {
    k = k * 10 + n % 10;
    n = n / 10;
  }

  return t == k;
}