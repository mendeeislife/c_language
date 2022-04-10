#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	a = 0;
	b = 1;
	c = 1;
	d = 1;
	e = 0;
	f = 1;
	
	a || printf("o") && c;
	c && d || printf("x");
	(d || e) && f || printf("x");
	a + e == 1 && printf("x");
	b && printf("o");
	e && d || printf("o");
	
	
	return 0;
}
