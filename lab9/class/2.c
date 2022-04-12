#include <stdio.h>

int min(int a, int b, int c, int d, int e);

int main() {
  int a, b, c, d, e;
  scanf("%d %d %d %d %d", & a, & b, & c, & d, & e);

  printf("%d\n", min(a, b, c, d, e));

  return 0;
}

int min(int a, int b, int c, int d, int e) {
  int min = a;

  if (b < min)
    min = b;
  if (c < min)
    min = c;
  if (d < min)
    min = d;
  if (e < min)
    min = e;

  return min;
}