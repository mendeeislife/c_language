#include <stdio.h>

int main() {
	int a, b, max, min;
	scanf("%d %d", &a, &b);
	
	max = (a > b) * a + (a <= b) * b;
	min = (a < b) * a + (a >= b) * b;
	
	printf("%d %d", min, max);
	
	return 0;
}
