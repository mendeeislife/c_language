#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  int A[n], B[m];

  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < m; i++) {
    scanf("%d", &B[i]);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(A[i] == B[j]) {
        printf("%d ", A[i]);
      }
    }
  }

  printf("\n");

  return 0;
}