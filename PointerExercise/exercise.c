#include <stdio.h>
void myFunction(int);
int main(void) {
  int i = 10;
  myFunction(i);
  printf("%d", i);
  return 0;
}

void myFunction(int j) {
    j = 20;
}
    
