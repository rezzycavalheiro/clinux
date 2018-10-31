#include <stdio.h>

int main(void) 
{
    int cities, population, i, sum=0;
    scanf("%d", &cities);
    for(i=0;i<cities;i++){
        scanf("%d", &population);
        if(population > 10000){
            sum = sum + 1;
        }
    }
    printf("%d", sum);
    return 0;
}
