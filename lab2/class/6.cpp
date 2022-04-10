#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	// adil hajuut - 2 tal adilhan
	// zov gurvaljin - 3 tal adilhan
	// eldev talt - 3 tal uur
	
	((a == b) && (a != c) || (a == c) && (a != b) || (b == c) && (b != a)) && printf("Adil hajuut");
	(a == b && b == c) && printf("Zov gurvaljin");
	(a != b && b != c && a != c) && printf("Eldev talt");
	
	return 0;
}
