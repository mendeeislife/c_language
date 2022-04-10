#include <stdio.h>

int main() {
	float onoo;
	
	scanf("%f", &onoo);
	
	onoo < 21 && printf("Ta F avsan bn.") ||
	onoo < 24.5 && printf("Ta D avsan bn.") ||
	onoo < 28 && printf("Ta C avsan bn.") ||
	onoo < 31.5 && printf("Ta B avsan bn.") ||
	onoo <= 35 && printf("Ta A avsan bn.");
	
	return 0;
}
