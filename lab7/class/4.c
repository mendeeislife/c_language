#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int b[n];

    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<m; j++) {
            if(arr[i][j] % 2 == 0)
                count++;
        }
        b[i] = count;
    }

    int max = b[0], temp;
    for(int i=0; i<n; i++) {
        if(b[i] > max) {
            max = b[i];
            temp = i + 1;
        }
    }

    printf("%d-r bagana hamgiin ih tegsh too aguulsan\n", temp);


    return 0;
}