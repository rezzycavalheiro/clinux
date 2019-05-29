#include <stdio.h>
#include <stdlib.h>

struct student {
  char firstName[30];
  char lastName[30];
  int birthYear;
  double averageGrade;
};

int main(void) {
  struct student me = {"Renata", "Cavalheiro", 1989, 3.5};
  printf("%s %s %d %f", me.firstName, me.lastName, me.birthYear, me.averageGrade);
  return 0;
}
