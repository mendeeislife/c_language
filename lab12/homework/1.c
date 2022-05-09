#include <stdio.h>
#include <string.h>

void print(char a[][10], int size) {
    printf("\n");
    for(int i = 0; i < size; i++)
        printf("%s\n", a[i]);
    printf("\n");
}

void sort(char a[][10], int size) {
    // bubble sorting algorithm
    char temp[10];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(a[j], a[j + 1]) > 0) {
                // a[j], a[j+1] bairiig n solih
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
}

int search(char a[][10], char *word, int size) {
    int k = -1;
    for(int i = 0; i < size; i++) {
        if(strcmp(a[i], word) == 0) {
            k = i + 1;
        }
    }
    
    return k;    
}

int main() {
    int n;
    char searchWord[100];
    printf("Oruulah ugiin too\n");
    scanf("%d", &n);

    char a[n][10];
    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);

  
    sort(a, n);
    print(a, n);
  
    printf("Haih ugee oruulna uu?: ");
    scanf("%s", searchWord);
  
    printf("%d\n", search(a, searchWord, n));

    return 0;
}
