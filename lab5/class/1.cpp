#include <stdio.h>

int main() {
    int n, max = 0, x;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int sum = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
       // printf("%d huvaagchiin niilber = %d\n", i, sum);
       if(sum > max) {
           max = sum;
           x = i;
       }
    }

    printf("%d\n", x);

    return 0;    
}
