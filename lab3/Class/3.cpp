#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	// max
	int x, y, z, w, max;
	if(a > b && a > c && a > d && a > e) {
		max = a, x = b, y = c, z = d, w = e;
	} else if(b > a && b > c && b > d && b > e) {
		max = b, x = a, y = c, z = d, w = e;
	} else if(c > a && c > b && c > d && c > e) {
		max = c, x = a, y = b, z = d, w = e;
	} else if(d > a && d > b && d > c && d > e) {
		max = d, x = a, y = b, z = c, w = e;
	} else if(e > a && e > b && e > d && e > d) {
		max = e, x = a, y = b, z = c, w = d;
	}
	
	// min
	int i, j, k, min;
	if(x < y && x < z && x < w) {
		min = x, i = z, j = y, k = w;
	} else if(y < x && y < z && y < w) {
		min = y, i = x, j = y, k = w;
	} else if(z < x && z < y && z < w) {
		min = z, i = x, j = y, k = w;
	} else if(w < x && w < y && w < z) {
		min = w, i = x, j = y, k = y;
	}
	
	int mid = 
	(i > j && i < k || i < j && i > k) * i + 
	(j > k && j < i || j < k && j > i) * j + 
	(k > i && k < j || k < i && k > j) * k;
	
	printf("max = %d\nmin = %d\nmid = %d", max, min, mid);
	
	return 0;
}

