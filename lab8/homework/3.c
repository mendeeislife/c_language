#include <stdio.h>
 
int main()
{
  	char str[100], word[100];
  	int Flag, i;
 
  	printf("Uguulberee oruulna uu : ");
	gets(str);
  	
	printf("Haih ugee oruulna uu : ");
  	gets(word);
	     	   	
  	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == word[0]) {
			Flag = 1;
			for(int j = 0; word[j] != '\0'; j++) {
				if(str[i + j] != word[j]) {
					Flag = 0;
					break;
				}
			}
		}
		if(Flag == 1) {
			break;
		}
	}
	if(Flag == 0)
  		printf("-1\n");
	else
		printf("'%s' ug n temdegt tsuvaagiin %d-r bairlal deer baina.\n", word, i + 1);
	
  	return 0;
}