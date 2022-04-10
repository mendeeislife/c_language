#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n], x;
  for (int i = 0; i < n; i++) 
    scanf("%d", & arr[i]);
    
  scanf("%d", & x);

  int c = 0;
  for (int i = 0; i < n; i++) {
    if (x == arr[i]) {
      printf("%d ", i);
      c++;
    }
  }

  if (c == 0)
    printf("-1");

  return 0;
}