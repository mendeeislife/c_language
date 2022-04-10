#include <stdio.h>

int main() {
    int n, sum = 0, avg, count = 0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;

    for(int i=0; i<n; i++)
        if(arr[i] > avg) 
            count++;

    printf("%dcm dundjaas undur %d huuhed baina\n", avg, count);
    return 0;
}