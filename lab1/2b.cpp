#include <stdio.h>
#include <math.h>

int main() {
	float a, b, alpha, c;
	float pi = 3.14;
	
	scanf("%f %f %f", &a, &b, &alpha);
	
	alpha = (alpha * pi) / 180; // converting alpha to radian
	
	c = sqrt((b*b) + (a*a) - (2*a*b*cos(alpha)));
	
	printf("%.2f", c);
	
	return 0;
}
