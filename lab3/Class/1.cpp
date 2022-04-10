#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n % 400 == 0) {
        printf("%d bol undur jil mun.\n", n) ;
    } else if(n % 100 == 0) {
        printf("%d bol undur jil bish.\n", n) ;
    } else if (n % 4 == 0) {
        printf("%d bol undur jil mun.\n", n);
    } else {
    	printf("%d bol undur jil bish.\n", n) ;
	}
	
	return 0;
}
