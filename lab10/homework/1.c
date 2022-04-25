#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_2darray(int a[][100], int n, int m) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
}

void print_2darray(int a[][100], int n, int m) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

void min(int a[][100], int n, int m, int row[], int col[]) {
  int i, j, min;
  for (i = 0; i < n; i++) {
    min = a[i][0];
    for (j = 1; j < m; j++) {
      if (min > a[i][j]) {
        min = a[i][j];
      }
    }
    row[i] = min;
  }
  printf("\nMor buriin xamgiin baga: ");
  for (i = 0; i < n; i++) {
    printf("%d -r moriin xamgiin baga: %d\n", i + 1, row[i]);
  }

  for (i = 0; i < m; i++) {
    min = a[0][i];
    for (j = 1; j < n; j++) {
      if (min > a[i][j]) {
        min = a[i][j];
      }
    }
    col[i] = min;
  }
  printf("\nBagana buriin xamgiin baga: ");
  for (i = 0; i < n; i++) {
    printf("%d -r moriin xamgiin baga: %d\n", i + 1, col[i]);
  }
}

void findmin(int a[][100], int n, int m, int row[], int col[]) {

  for (int i = 0; i < n; i++) {
    int minrow = 9999, mincol = 9999;
    for (int j = 0; j < m; j++) {
      if(a[i][j] < minrow)
        minrow = a[i][j];
      if(a[j][i] < mincol)
        mincol = a[j][i];
    }
    row[i] = minrow;
    col[i] = mincol;
  }
}

int main() {
  int c_row, c_col;
  int A[100], B[100];
  int C[100][100];

  printf("Xucnegtiin mor, baganii toog oruul: ");
  scanf("%d%d", &c_row, &c_col);

  read_2darray(C, c_row, c_col);
  print_2darray(C, c_row, c_col);

  findmin(C, c_row, c_col, A, B);

  printf("mor buriin hamgiin baga: \n");
  for(int i = 0; i < c_row; i++) {
    printf("%d -r moriin hamgiin baga: %d \n", i + 1, A[i]);
  }

  printf("bagana buriin hamgiin baga: \n");
  for(int i = 0; i < c_col; i++) {
    printf("%d -r moriin hamgiin baga: %d \n", i + 1, B[i]);
  }

  return 0;
}