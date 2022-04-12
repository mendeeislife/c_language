#include <stdio.h>

int gcd(int n, int m);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", gcd(n, m));

    return 0;
}

int gcd(int n, int m) {
    int gcd;
    for(int i=1; i <= n && i <= m; ++i) {
        if(n%i==0 && m%i==0)
            gcd = i;
    }
    return gcd;
}