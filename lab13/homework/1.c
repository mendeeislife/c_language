#include <stdio.h>

void read(int *begin, int *end) {
    for(int i = 0; i < (end - begin); i++)
        scanf("%d", begin + i);
}

void print(int *begin, int *end) {
    for(int i = 0; i < (end - begin); i++)
        printf("%d ", *(begin + i));
}

int main() {
    int i, a[100];
    read(a, a + 5);
    print(a, a + 5);

    return 0;
}