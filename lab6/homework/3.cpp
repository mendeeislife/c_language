#include <stdio.h>

int main() {

  int n, m, d, p = 1;
  
  printf("Neg bair heden ortstoi ve?\n");
  scanf("%d", &d);
  printf("Neg baishind heden davhar baidag ve?\n");
  scanf("%d", &m);
  printf("Neg davhart heden ail baidag ve?\n");
  scanf("%d", &n);

  int arr[d][m][n];

  for (int i = 1; i <= d; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= n; k++) {
        arr[i][j][k] = p;
        p++;
      }
    }
  }

  for (int i = 1; i <= d; i++) {
    printf("\nOrtsnii dugaar %d\n", i);
    for (int j = 1; j <= m; j++) {
      printf("%d-r davhart bui ailuud: ", j);
      for (int k = 1; k <= n; k++) {
        printf("%d ", arr[i][j][k]);
        if (k == n) {
          printf("\n");
        }
      }
    }
    printf("\n");
  }
  
  return 0;
}
