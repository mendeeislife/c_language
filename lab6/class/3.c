#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int a = 1, b = 1;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] <= arr[i + 1])
      a++;
    if (arr[i] >= arr[i + 1])
      b++;

  }

  if (n == 1) {
    printf("Neg elementtei");
  } else if (a == n) {
    printf("Usuhuur erembelegedsen\n");
  } else if (b == n) {
    printf("Buurahaar erembelegdsen\n");
  } else {
    printf("Erembelegdeegui\n");
  }

  return 0;
}