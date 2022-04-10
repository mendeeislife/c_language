#include<stdio.h>

int main() {
  int n, a, max = 0, min;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", & a);

    if (a > max) {
      max = a;
    }

    if (a < min) {
      min = a;
    }
  }

  printf("\nmax = %d\tmin = %d", max, min);

  return 0;
}
