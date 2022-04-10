#include <stdio.h>
#include <string.h>

int main() {
  char lName[100], fName[100], dob[100], fColor[100], hobby[100], freetime[100];
  int year, month, day;
  
  // printf("Tanii ovog?\n");
  // gets(lName);
  // printf("Tanii ner?\n");
  // gets(fName);
  // printf("Tanii tursun on sar udur?\n");
  // gets(dob);
  // printf("Durtai ungu?\n");
  // gets(fColor);
  // printf("Hobby yu ve?\n");
  // gets(hobby);
  // printf("Chuluut tsagaaraa yu hiideg ve?\n");
  // gets(freetime);

  printf("Tanii ovog?\n");
  scanf("%s", lName);
  printf("Tanii ner?\n");
  scanf("%s", fName);
  printf("Tanii tursun on sar udur? (yyyy mm dd)\n");
  scanf("%d %d %d", &year, &month, &day);
  printf("Durtai ungu?\n");
  scanf("%s", fColor);
  printf("Hobby yu ve?\n");
  scanf("%s", hobby);
  printf("Chuluut tsagaaraa yu hiideg ve?\n");
  scanf("%s", freetime);

  int age = 2022 - year;

  printf("%s ovogtoi %s ni %d %d %d tursun. Odoo %d nastai. Tuunii durtai ungu bol %s. Ter chuluut tsagaaraa %s hiideg. Tuunii hobby bol %s.\n", lName, fName, year, month, day, age, fColor, freetime, hobby);

  return 0;
}