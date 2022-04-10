#include <stdio.h>

int main() {
    printf(" \t\t\t abc + cba = dab\n");
    for (int a = 0; a < 10; a++) {
    for (int b = 0; b < 10; b++) {
      for (int c = 0; c < 10; c++) {
        int abc = a * 100 + b * 10 + c;
        int cba = c * 100 + b * 10 + a;
        int dab = abc + cba;
        if (dab < 999) {
             int d = dab/100;
             if ((a!=0) && (d!=a && d!=b) && (dab % 10 == b) && (dab / 10 % 10 == a)) {
                 
                 printf("a = %d b = %d c = %d\t %d + %d = %d\n", a, b, c, abc, cba, dab);
          }
        }

      }
    }
  }

  return 0;
}
