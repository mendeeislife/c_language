#include <stdio.h>

int main() {
    int a[100];
    int b = 4;
    double c = 5;
    int *p = &b;
    printf("%u %u %u %u\n", &a, &b, &c, &p);
    
    //printf("%u %x %p\n", &b, &b, &b);


    return 0;
}