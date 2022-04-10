#include <stdio.h>

int main() {
  int n, m, k = 1;
  scanf("%d %d", &n, &m);
  int arr[n][m];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      arr[i][j] = k;
      printf("%d ", arr[i][j]);
    }
    printf("\n");
    k++;
  }

  return 0;
}