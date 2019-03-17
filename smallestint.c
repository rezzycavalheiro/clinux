#include <stdio.h>

// int min(int x, int y);

int min(int, int);

int main(void){
  int total, i, x, y, result, n;
  scanf("%d", &total);
  scanf("%d", &x);
  scanf("%d", &y);
  result = min(x,y);
  for(i=3; i<=total; i++){
    scanf("%d", &n);
    result = min(n,result);
  }
  printf("%d", result);

  return 0;
}

int min(int x, int y){
    if(x < y){
      return x;
  }
    else if (y < x){
      return y;
  }
  return 0;
}
