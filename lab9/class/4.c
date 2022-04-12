#include <stdio.h>
#include <stdbool.h>

int A[100];
int prime_rage(int a, int b);
bool isPrime(int n);

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int n = prime_rage(a, b);
  printf("Niit : %d shirheg\n", n);

  //printing array A
  for(int i = 0; i<n; i++)
    printf("%d ", A[i]);

  printf("\n");

  return 0;
}

int prime_rage(int a, int b) {
  int count = 0;
  for(int i=a; i<=b; i++) {
    if(isPrime(i)) {
      A[count] = i;
      count++;
    }
  }
  return count;
}

bool isPrime(int n) {
  if (n == 0 || n == 1)
    return false;

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}