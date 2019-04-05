#include <stdio.h>

//Write your function prototype here
void calculateAge(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
  calculateAge(&age);
	printf("Your new age will be %d!\n", age);
	return 0;
}

//Write your function here
void calculateAge(int *ageAddr){
  if(*ageAddr >= 21){
    *ageAddr = *ageAddr - 10;
  }
  else {
    *ageAddr = *ageAddr * 2;
  }
}
