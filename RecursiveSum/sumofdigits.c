#include <stdio.h>

//Declare the function to sum the numbers, which will receive an integer
int sumOfDigits(int);

int main(void){
    int number, result;
    //Input from the user with the number he wants to sum
    scanf("%d", &number);
    //Result will be the total sum
    result = sumOfDigits(number);
    printf("%d \n", result);

    return 0;
}

//Recursive function to sum the numbers
int sumOfDigits(int number) {
    int lastn, total;
    if(number == 0){
        return 0;
    }
    else {
    lastn = number%10;
    total = lastn + sumOfDigits(number/10);
    return total;
    }
}
