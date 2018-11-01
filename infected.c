#include <stdio.h>

int main(void) {
    int population, infected = 1, days = 1;
    scanf("%d", &population);
    while(infected < population){
        infected = infected + infected*2;
        days = days + 1;
    }
    printf("%d", days);
    return 0;
}
