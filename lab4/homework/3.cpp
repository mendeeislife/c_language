#include <stdio.h>

int main() {
	for(int i = 1; i <= 7; i++) {
		int hour = 24, sleep, course, work;
		printf("Unuudur %d-dahi udur\n", i);
		printf("Heden tsag untah ve ?\n");
		scanf("%d", &sleep);
		hour -= sleep;
		printf("Heden hicheeltei ve ?\n");
		scanf("%d", &course);
		if(course > 0) {
			int subject;
			for(int j = 1; j <= course; j++) {
				printf("%d-r hicheel heden tsag oroh ve?\n", j);
				scanf("%d", &subject);
				hour -= subject;
			}
		}
		printf("Uur tuluvlusun heden ajiltai ve ?\n");
		scanf("%d", &work);
		if(work > 0) {
			int wHour;
			for(int j = 1; j <= work; j++) {
				printf("%d-r ajil heden tsag hiigdeh ve?\n", j);
				scanf("%d", &wHour);
				hour -= wHour;
			}
		}
		printf("%d-dahi udriin %d tsag chuluutei bolj bn.\n\n", i, hour);
	}
	
	return 0;
}
