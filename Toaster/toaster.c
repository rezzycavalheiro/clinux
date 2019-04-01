#include <stdio.h>
int main() {
  char type;
  int number, total = 0;
  scanf("%c %d", &type, &number);

  if(type == 'i'){
    total = number*sizeof(int);
  }
  else if(type == 's'){
    total = number*sizeof(short);
  }
  else if(type == 'c'){
    total = number*sizeof(char);
  }
  else if(type == 'd'){
    total = number*sizeof(double);
  }

  if(total >= 1000000){
    int result = total/1000000;
    int result2 = (total/1000)-(result*1000);
    int result3 = total-((result*1000000)+(result2*1000));
    printf("%d MB and %d KB and %d B \n", result, result2, result3);
  }
  else if(total >= 1000 && total < 1000000){
    int result = total/1000;
    int result1 = total - (result*1000);
    printf("%d KB and %d B \n", result, result1);
  }
  else if(total < 1000){
    printf("%d B", total);
  }


    return(0);
}
