#include <stdio.h>

double feet(double x){
  double result;
  result = x*3.2808;
  printf("%lf ft\n", result);
  return result;
}

double pounds(double y){
  double result;
  result = y*0.002205;
  printf("%lf lbs\n", result);
  return result;
}

double fahrenheit(double z){
  double result;
  result = 32 + 1.8*z;
  printf("%lf f\n", result);
  return result;
}

int main(void){
  int total, i;
  double number;
  char letter;
  scanf("%d", &total);
  for(i=0; i<total; i++){
    scanf("%lf %c", &number, &letter);
    if(letter == 'm'){
        feet(number);
      }
      else if(letter == 'g'){
        pounds(number);
      }
      else if(letter == 'c'){
        fahrenheit(number);
      }
    }
  return 0;
}
