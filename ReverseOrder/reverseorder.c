#include <stdio.h>

int main(void){
  char text[68][40];
  int i;

  for (i=0; i<69; i++){
    scanf("%s", text[i]);
  }

  for(i=67;i>=0;i--){
    printf("%s ", text[i]);
  }

  return 0;
}
