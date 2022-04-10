#include <stdio.h>

int main() {
    int n, l = 1;
    scanf("%d", &n);
    if(n <= 9) {
        for(int i=1; i<n; i++) {
            l *= 10;
        }
        
        for(int i=1; i<=l; i++) {
            int x = 1, hasZero = 0;
            int temp = i;
            while(temp > 0) {
                int m = temp % 10;
                if(m!=0) {
                    x *= m;
                }
                else {
                   hasZero = 1;
                   break; 
                }
                temp /= 10;
            }
            //printf("%d ", i);
            if(i % x == 0 && hasZero == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
