#include <stdio.h>

int main() {
	int a, b, c;
	int max, min, mid;
	scanf("%d %d %d", &a, &b, &c);
	
	max = (a > b && a > c) * a + (b > c && b > a) * b + (c > a && c > b) * c;
	min = (a < b && a < c) * a + (b < c && b < a) * b + (c < a && c < b) * c;
	mid = (a > b && a < c || a < b && a > c) * a + (b > c && b < a || b < c && b > a) * b + (c > a && c < b || c < a && c > b) * c;
	
	printf("%d %d %d", max, min, mid); 
	
	return 0;
}
