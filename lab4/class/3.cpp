#include <stdio.h>

int main() {
	int n, i = 0; //i=0 gej zarlaj ugsun
	scanf("%d", &n);
	do {
		printf("%d ", i);
		i++;
	} while (i <= n); // i<n baisniig i<=n bolgood tentsuu bh uyd neg uildel nemej ugsun
	printf("\n");
	
	
	return 0;
}
