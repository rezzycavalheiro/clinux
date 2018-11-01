#include <stdio.h>

int main(void){
    int number, guess = 0, count = 0;
    scanf("%d", &number);
    while(guess != number){
        scanf("%d", &guess);
        if(guess > number){
            printf("it is less\n");
        }
        else if(guess < number){
            printf("it is more\n");
        }
        count++;
    }
    printf("Number of tries needed:\n%d", count);
    return 0;
}
