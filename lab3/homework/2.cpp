#include <stdio.h>

int main() {
  int on, sar, udur;

  scanf("%d %d %d", &on, &sar, &udur);

  if (on == 2022) {
    if (sar == 3) {
      if (udur == 1) {
        printf("Odoo");
      } else if (udur > 1) {
        printf("Ireedui");
      } else if (udur < 1) {
        printf("Ungursun");
      }
    } else if (sar < 3) {
      printf("Ungursun");
    } else if (sar > 3) {
      printf("Ireedui");
    }
  } else if (on < 2022) {
    	printf("Ungursun");
  } else if (on > 2022) {
    	printf("Ireedui");
  }
  
  return 0;
}
