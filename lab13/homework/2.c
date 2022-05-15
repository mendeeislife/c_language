#include <stdio.h>

void read(int *p) {
    // scanf("%d", p + 2);
    for(int i=0; i<4; i++)
        scanf("%d", p + i);
}


int main() {
    int a[100];
    read(a);

    // printing entered values
    for(int i=0; i<4; i++)
        printf("%d ", a[i]);

    return 0;
}