#include <stdio.h>

int main() {

  int a[100];
  int *p = a;
  int i, n;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", a + i);

  int *max;
  *max = p[0];
  for(i = 0; i < n; i++) {
    if(max < *(p + i)) {
      max = p + i;
    }
  }

  printf("%d\n" , max);

  return 0;
}