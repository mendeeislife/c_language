#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n % 2 == 0) {
		//tegsh
		printf("%d n tegsh too", n);
		if(n % 10 == 0 && n % 4 == 0) {
			printf(" buguud 10, 4-t zereg huvaagddag.", n);
		} else if(n % 2 == 0 && n % 8 == 0) {
			printf(" buguud 2, 8-t zereg huvaagddag.", n);
		}
		
	} else {
		//sondgoi
		printf("%d n sondgoi too", n);
		if(n % 3 == 0 && n % 7 == 0) {
			printf(" buguud 3, 7-t zereg huvaagddag.", n);
		} else if(n % 5 == 0 && n % 9 == 0) {
			printf(" buguud 5, 9-t zereg huvaagddag.", n);
		}
	}
	
	return 0;
}
