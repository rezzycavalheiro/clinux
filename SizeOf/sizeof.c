#include <stdio.h>
int main() {
  int amount, i, number = 1, result = 0;
  char type;
  scanf("%d", &amount);

  for(i=1; i<=amount; i++){
    scanf("%d %c", &number, &type);
    if(type != 'i' && type != 'c' && type != 'd'){
        printf("Invalid tracking code type");
        return 0;
    }
    else if(type == 'i'){
      number *= sizeof(int);
    }
    else if(type == 'd'){
      number *= sizeof(double);
    }
    else if(type == 'c'){
      number *= sizeof(char);
    }
    result += number;
  }

  printf("%d bytes \n", result);

    return(0);
}
