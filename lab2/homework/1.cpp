#include <stdio.h>

int main() {
	int n, a, b, c, d, x;
	scanf("%d", &n);
	
	d = n / 1000;
	c = n / 100 % 10;
	b = n / 10 % 10;
	a = n % 10;
	
	x = (a * 1000) + (b * 100) + (c * 10) + d;
	
	(x == n) && printf("1");
	(x != n) && printf("0");
	
	return 0;
}
