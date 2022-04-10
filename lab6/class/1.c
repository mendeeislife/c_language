#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[n];
    for(int i=0; i<n; i++) {
        x[i] = i + 1;
    }

    for(int i=0; i<n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
