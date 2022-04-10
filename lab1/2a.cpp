#include <stdio.h>
#include <math.h>

int main() {
	float ans, deed, dood;
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	deed = sqrt(pow((pow(a, 3) + ((float)b / c)), 2) + d);
	dood = pow(d, 2) - (a*b)/(float)c;
	ans = (deed / dood) * d;
	
	printf("%.2f", ans);
	
	
	return 0;
}
