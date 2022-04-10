#include <stdio.h>

int main() {
  int n, p;
  scanf("%d", &n);
  int arr[n][n];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      p = i + j + 1;
      if(p > n)
        arr[i][j] = n - i - j + n - 1;
      else
        arr[i][j] = p;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}