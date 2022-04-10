#include <stdio.h>

int main() {
    int n, check = 1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            check = 0;
            break;
        }
    }

    if (check == 0) 
        printf("Tegsh hemtei bish\n");
    else 
        printf("Tegsh hemtei\n");
  
    return 0;
}