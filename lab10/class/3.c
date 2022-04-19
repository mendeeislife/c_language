#include <stdio.h>

int count(int n, int A[]) {
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if(n % i == 0) {
      A[cnt] = i;
      cnt++;
    }
  }
  return cnt;
}

int main() {
  int n, A[100];
  scanf("%d", &n);
  int x = count(n, A);
  printf("%d\n", x);
  for(int i = 0; i < x; i++)
    printf("%d ", A[i]);
  printf("\n");
  return 0;
}