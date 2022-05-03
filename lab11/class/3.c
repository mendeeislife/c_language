#include <stdio.h>
#include <math.h>

struct Triangle {
  int a, b, c;
};

double find_area(double a, double b, double c) {
  double p, s;
  p = (a + b + c) / 2;
  s = sqrt(p * (p - a) * (p - b) * (p - c));

  return s;
}

int main() {

  struct Triangle Triangle1, Triangle2;
  double area1, area2;

  scanf("%d", &Triangle1.a);
  scanf("%d", &Triangle1.b);
  scanf("%d", &Triangle1.c);

  scanf("%d", &Triangle2.a);
  scanf("%d", &Triangle2.b);
  scanf("%d", &Triangle2.c);

  area1 = find_area(Triangle1.a, Triangle1.b, Triangle1.c);
  area2 = find_area(Triangle2.a, Triangle2.b, Triangle2.c);

  if (area1 > area2) {
    printf("Ehnii gurvaljnii talbai ih\n");
  } else if (area1 == area2) {
    printf("Hoyr gurvaljnii talbai tentsuu baina\n");
  } else if (area1 < area2) {
    printf("Hoyrdah gurvaljnii talbai ih\n");
  }

  return 0;
}