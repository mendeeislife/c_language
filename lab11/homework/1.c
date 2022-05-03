#include<stdio.h>

#include<string.h>

struct Student {
  char fname[20], lname[20], id[10];
  float golch;
};
typedef struct Student Student;

void read_students(Student a[], int n);

void print_students(Student a[], int n);

void print(Student st);

int search_by_fname(Student a[], int n, char fname[]);

int search_by_lname(Student a[], int n, char lname[]);

int search_by_id(Student a[], int n, char id[]);

int search_by_golch(Student a[], int n, float golch);
void sort_by_golch(Student a[], int n);
int main() {
  Student a[100];
  int n, cmd, idx;
  printf("Oyutnii too: ");
  scanf("%d", & n);
  read_students(a, n);
  print_students(a, n);
  char fname[20], lname[20], id[20];
  float golch;
  while (1) {
    printf("1: Nereer xaix, 2: Ovgoor xaix, 3: ID - aar xaix, 4: Golchoor xaix, 5: Golchoor erembelex, 6: Xevlex, 7: Garax\n");
    scanf("%d", & cmd);
    if (cmd == 1) {
      printf("Xaix ner: ");
      scanf("%s", fname);
      idx = search_by_fname(a, n, fname);
      if (idx == -1)
        printf("Oyutan oldsongui\n");
      else
        print(a[idx]);
    } else if (cmd == 2) {
      printf("Xaix ovog: ");
      scanf("%s", lname);
      idx = search_by_lname(a, n, lname);
      if (idx == -1)
        printf("Oyutan oldsongui\n");
      else
        print(a[idx]);
    } else if (cmd == 3) {
      printf("Xaix id: ");
      scanf("%s", id);
      idx = search_by_id(a, n, id);
      if (idx == -1)
        printf("Oyutan oldsongui\n");
      else
        print(a[idx]);
    } else if (cmd == 4) {
      printf("Xaix golch: ");
      scanf("%f", & golch);
      idx = search_by_golch(a, n, golch);
      if (idx == -1)
        printf("Oyutan oldsongui\n");
      else
        print(a[idx]);
    } else if (cmd == 5)
      sort_by_golch(a, n);
    else if (cmd == 6)
      print_students(a, n);
    else
      break;
  }
  return 0;
}
void print(Student st) {
  printf("\n%s\t\t\t%s\t\t\t%f\t\t%s\n", st.fname, st.lname, st.golch, st.id);
}
void read_students(Student a[], int n) {
  char b[20];
  for (int i = 0; i < n; i++) {
    printf("First Name: ");
    scanf("%s", b);
    strcpy(a[i].fname, b);
    printf("Last Name: ");
    scanf("%s", b);
    strcpy(a[i].lname, b);
    printf("Student ID: ");
    scanf("%s", b);
    strcpy(a[i].id, b);
    printf("Golch: ");
    scanf("%f", & a[i].golch);
  }
}
void print_students(Student a[], int n) {
  printf("\nFirst Name\t\tLast Name\t\tGolch\t\tStudent ID");
  for (int i = 0; i < n; i++) {
    print(a[i]);
  }
}
int search_by_fname(Student a[], int n, char fname[]) {
  int t = 0;
  printf("\nFirst Name\t\tLast Name\t\tGolch\t\tStudent ID");
  for (int i = 0; i < n; i++) {
    if (strcmp(a[i].fname, fname) == 0) {
      print(a[i]);
      t++;
    }
  }
  return t;
}
int search_by_lname(Student a[], int n, char lname[]) {
  int t = 0;
  printf("\nFirst Name\t\tLast Name\t\tGolch\t\tStudent ID");
  for (int i = 0; i < n; i++) {
    if (strcmp(a[i].lname, lname) == 0) {
      print(a[i]);
      t++;
    }
  }
  return t;
}
int search_by_golch(Student a[], int n, float golch) {
  int t = 0;
  printf("\nFirst Name\t\tLast Name\t\tGolch\t\tStudent ID");
  for (int i = 0; i < n; i++) {
    if (a[i].golch >= golch) {
      print(a[i]);
      t++;
    }
  }
  return t;
}
int search_by_id(Student a[], int n, char id[]) {
  int t = 0;
  printf("\nFirst Name\t\tLast Name\t\tGolch\t\tStudent ID");
  for (int i = 0; i < n; i++) {
    if (strcmp(a[i].id, id) == 0) {
      print(a[i]);
      t++;
    }
  }
  return t;
}
void sort_by_golch(Student a[], int n) {
  Student c;
  for (int i = 0; i < n; i++) {
    if (a[i].golch < a[i + 1].golch) {
      c = a[i];
      a[i] = a[i + 1];
      a[i + 1] = c;
      i = i - 2;
      if (i < 0)
        i = 0;
    }
  }
}