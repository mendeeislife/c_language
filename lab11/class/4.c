#include <stdio.h>

#include <math.h>

struct Rational {
  int d, n;
};

typedef struct Rational Rational;

void print(Rational a) {
  printf("%d/%d", a.d, a.n);
};

Rational simplify(Rational x) {

  int a, b, c;
  a = x.n;
  b = x.d;
  do {
    c = a % b;
    a = b;
    b = c;
  } while (c != 0);

  x.n /= a;
  x.d /= a;

  return x;
}

Rational add(Rational a, Rational x) {
  Rational k;
  k.d = a.n * x.d + a.d * x.n;
  k.n = a.d * x.d;

  return simplify(k);
}

Rational sub(Rational a, Rational x) {
  Rational k;
  k.d = a.n * x.d - a.d * x.n;
  k.n = a.d * x.d;

  return simplify(k);
}

Rational mult(Rational a, Rational x) {
  Rational k;
  k.d = a.n * x.n;
  k.n = a.d * x.d;

  return simplify(k);
}

Rational div(Rational a, Rational x) {
  Rational k;
  k.d = a.d * x.n;
  k.n = a.n * x.d;

  return simplify(k);
}

int main() {
  Rational a, x;

  printf("#1 n, d: ");
  scanf("%d %d", & a.n, & a.d);
  printf("#2 n, d: ");
  scanf("%d %d", & x.n, & x.d);

  printf("\nNemeh: ");
  print(add(a, x));
  printf("\nHasah: ");
  print(sub(a, x));
  printf("\nUrjih: ");
  print(mult(a, x));
  printf("\nHuvaah: ");
  print(div(a, x));

  printf("\n");

  return 0;
}