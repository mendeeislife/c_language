#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for(unsigned int i=1; i<=9876543210; i++) {
        int a = i, m, sum = 0;
        while(a > 0) {
            m = a % 10;
            sum += m;
            a /= 10;
        }
        if(sum == n) {
            printf("%d\n", i);
        }
    } 

    return 0;
}
