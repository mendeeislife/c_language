#include <stdio.h>

int *find(int a[][100], int n, int m) {
    int max = 0, count;
    int *cur_loc = NULL;
    for(int i = 0; i < n; i++) {
        
        count = 0;
        for(int k = 0; k < m; k++)
            if (a[i][k] % 2 == 0)
                count++;

        if(count > max) {
            max = count;
            cur_loc = &a[i][0];
        }
    }

    return cur_loc;
}

int main() {
    int n = 3, m = 3;
    int a[3][100] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    int *p = find(a, n, m);

    for(int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}