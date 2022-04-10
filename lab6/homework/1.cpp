#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int A[n], B[m], C[n + m];
  int j = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    C[j] = A[i];
    j++;
  }

  for (int i = 0; i < m; i++) {
    scanf("%d", &B[i]);
    int flag = 0;
    for (int x = 0; x < j; x++) {
      if (B[i] != C[x]) {
        flag = 1;
      } else {
        flag = 0;
      }
    }
    if (flag == 1) {
      C[j] = B[i];
      j++;
    }
  }

  for (int i = 0; i < j; i++)
    printf("%d ", C[i]);

  return 0;
}
