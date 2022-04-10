#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }

    int i = n-1;
    while(i >= 0) {
        printf("%d ", x[i]);
        i--;
    }
    printf("\n");

    return 0;
}
