#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n][n];
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	//mur buriin niilber
	for(int i=0; i<n; i++) {
		int mur = 0;
		for(int j=0; j<n; j++) {
			mur += arr[i][j];
		}
		printf("%d mur = %d\n", i+1, mur);
	}
	
	//bagana buriin niilber
	for(int j=0; j<n; j++) {
		int bagana = 0;
		for(int i=0; i<n; i++) {
			bagana += arr[i][j];
		}
		printf("%d bagana = %d\n", j+1, bagana);
	}
	
	//diagonal
	int zuunDiagonal = 0, baruunDiagonal = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			//zuun
			if(i == j) {
				zuunDiagonal += arr[i][j];
			}
			//baruun
			if((i + j) == (n-1)) {
				baruunDiagonal += arr[i][j];
			}
		}
	}
	printf("zuun diagonal = %d\nbaruun diagonal = %d\n", zuunDiagonal, baruunDiagonal);
	
	
	return 0;
}
