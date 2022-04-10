#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n <= 45) {
        for(int i=1; i<=9876543210; i++) {
            int hasDuplicate = 0;
            int t = i, td = i;
            int sum = 0;
            while(t > 0) {
                int m = t % 10;
                td %= 10;
                while(td > 0) {
                    int md = td % 10;
                    if(m == md) {
                        hasDuplicate = 1;
                        break;
                    }
                    td /= 10;
                }
                if(hasDuplicate != 1) {
                    sum += m;
                } else {
                    break;
                }
                t /= 10;
            }
            if(n == sum) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
