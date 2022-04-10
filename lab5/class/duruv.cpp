// Online C++ compiler to run C++ program online
#include <stdio.h>

int main() {
  int n;
  scanf("%d", & n);
  // a b c d e f g h i j
  if (n <= 45) {
    for (int a = 1; a < 10; a++) {
      for (int b = 0; b < 10; b++) {
        if (a != b) {
          for (int c = 0; c < 10; c++) {
            if (b != c) {
              for (int d = 0; d < 10; d++) {
                if (c != d) {
                  for (int e = 0; e < 10; e++) {
                    if (d != e) {
                      for (int f = 0; f < 10; f++) {
                        if (e != f) {
                          for (int g = 0; g < 10; g++) {
                            if (f != g) {
                              for (int h = 0; h < 10; h++) {
                                if (g != h) {
                                  for (int i = 0; i < 10; i++) {
                                    if (h != i) {
                                      for (int j = 0; j < 10; j++) {
                                        if (i != j) {
                                          int sum = a + b + c + d + e + f + g + h + i + j;
                                          if (sum == n) {
                                            printf("%d\n", n);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}
