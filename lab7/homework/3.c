#include <stdio.h>

int main() {
  int n, m, k;

  printf("A n:\n");
  scanf("%d", &n);
  printf("A m, B m:\n");
  scanf("%d", &m);
  printf("B k:\n");
  scanf("%d", &k);

  int a[n][m], b[m][k], c[n][k]; 

  printf("\nA matrix input\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d baganiin %d deh element: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nB matrix input\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      printf("%d baganiin %d deh element: ", i + 1, j + 1);
      scanf("%d", & b[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
	int sum = 0;
    for (int j = 0; j < k; j++) {
      for (int x = 0; x < m; x++) {
        sum = sum + a[i][x] * b[x][j];
      }
      c[i][j] = sum;
      sum = 0;
    }
  }

  printf("\nC matrix:\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++)
      printf("%d ", c[i][j]);

    printf("\n");
  }

  return 0;
}