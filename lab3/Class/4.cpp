#include <stdio.h>
#include <math.h>

int main() {
  float x1, x2, x3, y1, y2, y3;
  float dist1, dist2, dist3;
  float x0 = 0.0;
  float y0 = 0.0;
  
  printf("x1 = "); scanf("%f", &x1);
  printf("y1 = "); scanf("%f", &y1);
  printf("x2 = "); scanf("%f", &x2);
  printf("y2 = "); scanf("%f", &y2);
  printf("x3 = "); scanf("%f", &x3);
  printf("y3 = "); scanf("%f", &y3);
  
  dist1 = sqrt((x1 - x0) * (x1 - x0) + (y1 - x0) * (y1 - x0));
  dist2 = sqrt((x2 - x0) * (x2 - x0) + (y2 - x0) * (y2 - x0));
  dist3 = sqrt((x3 - x0) * (x3 - x0) + (y3 - x0) * (y3 - x0));
  
  // Hamgiin ih
  if ((dist1 > dist2) && (dist1 > dist3)) {
    printf("Hamgiin hol orshih tseg: x=%0.0f y=%0.0f\n", x1, y1);
  } else if (dist2 > dist3) {
    printf("Hamgiin hol orshih tseg: x=%0.0f y=%0.0f\n", x2, y2);
  } else {
    printf("Hamgiin hol orshih tseg: x=%0.0f y=%0.0f\n", x3, y3);
  }

  //Hamgiin baga
  if ((dist1 < dist2) && (dist1 < dist3)) {
    printf("Hamgiin oir orshih tseg: x=%0.0f y=%0.0f\n", x1, y1);
  } else if (dist2 < dist3) {
    printf("Hamgiin oir orshih tseg: x=%0.0f y=%0.0f\n", x2, y2);
  } else {
    printf("Hamgiin oir orshih tseg: x=%0.0f y=%0.0f\n", x3, y3);
  }

  return 0;
}
