#include <stdio.h>

void read(int A[], int n);
void print(int A[], int n);
void sort(int A[], int n);

int main() {
    int too[100], n;

    scanf("%d", &n);

    read(too, n);
    sort(too, n);
    print(too, n);


    return 0;
}

void read(int A[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
}

void print(int A[], int n) {
	for(int i=0; i<n; i++)
		printf("%d ", A[i]);
    printf("\n");
}

void sort(int A[], int n) {
    //Insertion sort
    int temp;
    for (int i = 1; i < n; i++) {
        temp = A[i];
        int j = i - 1;

        while (j >= 0 && temp <= A[j]) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        
        A[j + 1] = temp;
    }
}
