#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int *begin, int *end) {
    int n = (end - begin);
    for (int *i = begin, *j = end - 1; i < n / 2 + begin; i++) {
        swap(i, j);
        j--;
    }
        
}

int main() {
    int a[5] = {3, 7, 1, 2, 4};
    reverse(a, a + 3);
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}