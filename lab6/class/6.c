#include <stdio.h>

int main() {
  int m, n;
  int x;

  scanf("%d %d", &n, &m);
  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  scanf("%d", & x);

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(arr[i][j] == x) {
        ans = 1;
        printf("%d-r murnii %d-r bagana\n", i+1, j+1);
      }
    }
  }

  if (ans == 0) {
    printf("-1\n");
  }

  return 0;
}